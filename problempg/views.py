from asyncio import subprocess
import subprocess


from django.shortcuts import render
from homescr.models import Problems, Testcases, Solutions
from django.core.files.storage import FileSystemStorage
import os
from datetime import datetime

# Create your views here.

def problem_page(request, problem_id):
    problem_detail = Problems.objects.get(id = problem_id)
    problem_testcase = Testcases.objects.get(id= problem_id)
    return render(request, 'problempg/problem_page.html',
                  {'problem_detail':problem_detail, 'problem_testcase':problem_testcase })

def usercode(request, problem_id):
    if request.method == 'POST':
        problem_testcase = Testcases.objects.get(id=problem_id)
        problem_detail = Problems.objects.get(id = problem_id)
        file_out = open("E:\online_judge\language\output.txt","w")
        file_in = open("E:\online_judge\language\input.txt","w")
        for element in problem_testcase.problem_input:
            element = element.strip('\n')
            file_in.write(element)
        file_in.close()
        file_in = open("E:\online_judge\language\input.txt", "r")
        output = "WA"
        lang= ""
        if request.POST['user_problem_code']:
            user_problem_code = request.POST['user_problem_code']
            language = request.POST['language']
            lang = (str)(language)
            if lang=="c++":
                cpp_code = open("E:\online_judge\language\\forcpp.cpp", "w")
                cpp_code.write(user_problem_code)
                cpp_code.close()
                subprocess.run(["g++", "E:\online_judge\language\\forcpp.cpp","-o", "output.exe"], shell=True)
                subprocess.run([".\output.exe"], stdin=file_in, stdout=file_out, shell=True)
                file_out.close()
                file_in.close()
             
        elif request.FILES['2']:   # ----->
            user_code_file = request.FILES['2']
            fs = FileSystemStorage()
            fs.save(user_code_file.name, user_code_file)
            file_type =str(user_code_file.name)
            cpp_lan = file_type.find(".cpp")
            file_path = "E:\online_judge\language\BASE_DIR\media\\" + user_code_file.name
            if cpp_lan!= -1:
                lang = "c++"
                subprocess.run(["g++",file_path, "-o", "output.exe"], shell= True)
                subprocess.run([".\output.exe"], stdin = file_in, stdout = file_out, shell = True)
                file_out.close()
                file_in.close()
                os.remove(file_path)
        
        file_out = open("E:\online_judge\language\output.txt", "r")
        out = file_out.read()
        if (str)(problem_testcase.problem_output)==str(out) :   
            output = "AC"
            problem_testcase.problem_output += "\n"
        if (str)(problem_testcase)==(str)(out):
            output = "AC"
        file_out.close()
        
        sol = Solutions()
        sol.problem = Problems.objects.get(id=problem_id)
        sol.solution_problem = problem_detail.problem_nm
        sol.problem_code = problem_detail.problem_code
        sol.problem_diff = problem_detail.problem_diff
        sol.solution_lang = lang
        sol.verdict = output
        sol.submission_time = datetime.now()
        sol.save()
        
        latest_lb = Solutions.objects.order_by('-submission_time')[:30]
        context = {'verdict':latest_lb}
        
    return render(request, 'problempg/leaderboard.html', context)
        
    
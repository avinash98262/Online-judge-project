from django.shortcuts import render
from .models import Problems, Solutions, Testcases

# Create your views here.

def index(request): 
    question_list = Problems.objects.all()
    return render(request, 'homescr/index.html', {'question':question_list})

from pyexpat import model
from statistics import mode
from django.db import models

# Create your models here.
class Problems(models.Model):
    problem_st = models.TextField()
    problem_nm = models.CharField(max_length=50)
    problem_code = models.CharField(max_length=3)
    problem_diff = models.CharField(max_length=6)
    
    def __str__(self):
        return self.problem_nm
    
class Solutions(models.Model):
    problem = models.ForeignKey(Problems,  on_delete=models.CASCADE)
    solution_problem = models.TextField(max_length=50000)
    problem_code = models.CharField(max_length=6, default="easy")
    solution_lang = models.CharField(max_length=7,default="c++")
    verdict = models.CharField(max_length=20)
    submission_time = models.DateTimeField("submitted_at")
    
    def __str__(self):
        return self.verdict
    
class Testcases(models.Model):
    Problem = models.ForeignKey(Problems, on_delete=models.CASCADE)
    problem_input = models.TextField(max_length=1000)
    problem_output = models.TextField(max_length=1000)
    # def save(self , *args,**kwargs )->None:
    #     self.input = self.input.replace('\r\n','\n').strip()
    #     self.output = self.input.replace('\r\n','\n').strip()
    #     return super().save(*args,**kwargs)
    def __str__(self):
        return self.problem_input
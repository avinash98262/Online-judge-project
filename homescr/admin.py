from django.contrib import admin

# Register your models here.
from .models import Problems,Testcases

admin.site.register(Problems)
admin.site.register(Testcases)

from django.shortcuts import render 
from django.http import HttpResponse

# Create your views here.

def home(request):
    return render(request,"chairmanapp/index.html") 

def about_1(request):
    return render(request,"chairmanapp/about_1.html") 

def ipl(request):
    return render(request,"chairmanapp/ipl.html")

def csk(request):
    return render(request,"chairmanapp/csk_info.html")

def mi(request):
    return render(request,"chairmanapp/mi_info.html")

def kkr(request):
    return render(request,"chairmanapp/kkr_info.html")

def srh(request):
    return render(request,"chairmanapp/srh_info.html")

def dc(request):
    return render(request,"chairmanapp/dc_info.html")

def punjab(request):
    return render(request,"chairmanapp/pk_info.html")

def rcb(request):
    return render(request,"chairmanapp/rcb_info.html")

def rr(request):
    return render(request,"chairmanapp/rr_info.html")

def gt(request):
    return render(request,"chairmanapp/gt_info.html")

def lsg(request):
    return render(request,"chairmanapp/lsg_info.html")


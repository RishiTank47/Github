# How to Define a Class in Python? What Is Self? Give An Example Of A Python Class


# how to define a class

class MyClass:
    pass

# what is self

'''
The self parameter refers to the instance of the class and is used to access and modify 
attributes within the class.
'''

class student:
    stid=1         
    stnm="Rishi"

    def getdata(self):  
        print("This is data of student")


st=student()
print(st.stid)
print(st.stnm)
st.getdata()

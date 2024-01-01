# How Do You Handle Exceptions With Try/Except/Finally In Python? Explain with coding snippets.

try:
    a=10/0
except:
    print("can not divide by zero")
finally:
    print("it is executed")
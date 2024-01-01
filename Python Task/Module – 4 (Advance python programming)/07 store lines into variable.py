# Write a Python program to read a file line by line store it into a variable.

# file=open("store into variable.txt","x")

file=open("store into variable.txt","r")
for i in range(17):
     file_1=file.readline()
     print(f"\nvariable {i}:",file_1)
    #  break
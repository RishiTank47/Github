# Write a Python program to read a file line by line and store it into a list 

# file=open("read line & store into list.txt","x")

file=open("read line & store into list.txt","r")
for i in range(18):
     file_1=file.readlines()
     print(file_1)
     break
       
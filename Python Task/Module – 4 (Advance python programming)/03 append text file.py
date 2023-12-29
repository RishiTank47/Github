# Write a Python program to append text to a file and display the text.

f=open("python_2.txt","a")
append_1="This is how you can append"

f.write(append_1)
f=open("python_2.txt","r")

print(f.read())

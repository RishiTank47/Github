# Write a Python program to count the number of lines in a text file.

# file=open("num_of_lines_in_file.txt","x")

file=open("num_of_lines_in_file.txt","r")

count=0
for i in file:
    count+=1
    # print(f"line{i}:-",file.readline())
print(f"There are {count} lines in this file")
"""Write a Python program to count the number of strings where the string length 
is 2 or more and the first and last character are same from a given list of strings."""

list=["Rishi","Hello","abcda","Kuchhbhi","civic","pop","kem chho"] 

count=0

for i in list:
    if i[0]==i[-1]:
        count+=1

print(count) 
# Write a Python program to count the frequency of words in a file.

# f=open("frequency word.txt","x")

frequency=dict()

f=open("frequency word.txt","r")

for i in f:
    i=i.lower()
    file=i.split()
    for j in file:
        if j in frequency:
            frequency[j]+=1
        else:
            frequency[j]=1

print(frequency)
    
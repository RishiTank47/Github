# Write a Python program to remove duplicates from a list.

l1=[445,4,2,1,445,56,4,2,1,43,45,45,6]
l2=[]

for i in l1:
    if i not in l2:
        l2.append(i)
print(l2)

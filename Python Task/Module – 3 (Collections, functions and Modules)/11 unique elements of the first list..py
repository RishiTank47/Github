'''Write a Python function that takes a list and returns a new list with unique
elements of the first list.'''

l1=[23,45,6,7,34,7,45]

l2=[]

for i in l1:
    if i not in l2:
        l2.append(i)

print(l2) 
 


# Write a Python program to check multiple keys exists in a dictionary

dic = {'apple': 5, 'banana': 2, 'orange': 8, 'grape': 3}

keys = ['apple', 'orange', 'kiwi']

keys_in=[]

for i in keys:
    if i in dic:
        keys_in.append(i)
    else:
        pass

print(keys_in)
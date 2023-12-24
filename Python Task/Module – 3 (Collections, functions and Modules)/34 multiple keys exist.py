# Write a Python program to check multiple keys exists in a dictionary

my_dict = {'apple': 5, 'banana': 2, 'orange': 8, 'grape': 3}

keys_to_check = ['apple', 'orange', 'kiwi']

keys_in=[]

for i in keys_to_check:
    if i in my_dict:
        keys_in.append(i)
    else:
        pass
print(keys_in)
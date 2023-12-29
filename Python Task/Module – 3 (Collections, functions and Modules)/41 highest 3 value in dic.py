# Write a Python program to find the highest 3 values in a dictionary

dic = {'a': 10, 'b': 25, 'c': 15, 'd': 30, 'e': 20}

order=sorted(dic.values())

print(order[-3:])
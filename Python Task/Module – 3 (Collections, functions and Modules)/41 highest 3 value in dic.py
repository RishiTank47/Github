# Write a Python program to find the highest 3 values in a dictionary

my_dict = {'a': 10, 'b': 25, 'c': 15, 'd': 30, 'e': 20}

highest_values = sorted(my_dict.values(), reverse=True)[:3]

print(highest_values)

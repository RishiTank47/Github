# Python script to concatenate following dictionaries to create a new one.

dict1 = {'a': 1, 'b': 2}
dict2 = {'b': 3, 'c': 4}
dict3 = {'d': 5, 'e': 6}

concatenated_dict = {**dict1, **dict2, **dict3}

print(concatenated_dict)

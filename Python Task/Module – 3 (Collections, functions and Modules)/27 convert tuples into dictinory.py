#  Python program to convert a list of tuples into a dictionary.

tuples = [("a", 1), ("b", 2), ("c", 3)]

dict_from_tuples = {key: value for key, value in tuples}

print( dict_from_tuples)
# Python program to remove an empty tuple(s) from a list of tuples.

tuples = [(1, 2), (), (3, 4, 5), (), (6, 7), ()] 

remove= [tup for tup in tuples if tup]

print(remove)
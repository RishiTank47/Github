#  Python program to convert a list of tuples into a dictionary.

tuples = [("a", 1), ("b", 2), ("c", 3)]

dic={}

for k,v in tuples:
    dic[k]=v

print(dic)
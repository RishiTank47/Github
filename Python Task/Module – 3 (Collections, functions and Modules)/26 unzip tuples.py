# Python program to unzip a list of tuples into individual lists.

list_of_tuples = [(1, 'a', True), (2, 'b', False), (3, 'c', True)]

unzipped_lists = list(zip(*list_of_tuples))

print("Unzipped Lists:", unzipped_lists)  

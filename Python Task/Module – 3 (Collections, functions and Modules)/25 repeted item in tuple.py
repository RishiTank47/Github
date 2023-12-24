#  Python program to find the repeated items of a tuple.

my_tuple = (1, 2, 3, 2, 4, 5, 3, 6, 7, 7, 8, 9)

tuple1=[]
tuple2=[]

for i in my_tuple:
    if i not in tuple1:
       tuple1.append(i)
    else:
        tuple2.append(i)

print("Repeted items:-",tuple(tuple2))

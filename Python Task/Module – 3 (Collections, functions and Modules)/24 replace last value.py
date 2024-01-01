# a Python program to replace last value of tuples in a list.

tuple_list_1=[(1,34,53,23,22)]

tuple_list_2=[]

for i in tuple_list_1:
    for j in i:
        tuple_list_2.append(j)

tuple_list_2.pop()
tuple_list_2.append(45)

tuple_list_3=tuple(tuple_list_2)

tuple_list_4=[]

tuple_list_4.append(tuple_list_3)

print(tuple_list_4)
       
    



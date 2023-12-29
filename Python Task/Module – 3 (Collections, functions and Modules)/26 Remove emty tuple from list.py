# Python program to remove an empty tuple(s) from a list of tuples.

tuples = [(1, 2), (), (3, 4, 5), (), (6, 7), ()] 

for i in tuples:
    tuples.remove(())

print(tuples)  
        


         

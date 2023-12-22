"""Write a Python function that takes two lists and returns true if they have
at least one common member."""

l=[76,35,89,778,1,2] 
l1=[445,4,2,1,445,56,4,2,1,43,45,45,6] 

for i in l:
    for j in l1:
        if i==j:
            print(True)
            exit()
print(False)

            

        

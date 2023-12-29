# check whether a list contains a sub list

main_list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]


sublist = [3, 4, 10, 5]


sublist_present=True

for i in sublist:
    if i not in main_list:
        sublist_present=False
        break

if sublist_present:
    print("sublist is present in main list")
else:
    print("sublist is not present in main list")



    


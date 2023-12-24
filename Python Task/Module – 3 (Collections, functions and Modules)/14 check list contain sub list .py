# check whether a list contains a sub list

main_list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]


sublist = [3, 4, 11, 5]


sublist_present=True
for i in sublist:
    if i not in main_list:
        sublist_present=False
        break

if sublist_present:
    print("Sublist is present in the main list.")
else:
    print("Sublist is not present in the main list.")
 






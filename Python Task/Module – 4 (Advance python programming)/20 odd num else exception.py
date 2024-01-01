# Write python program that user to enter only odd numbers, else will raise an exception.

while True:
    odd = int(input("Enter an odd number: "))
    try:
        if odd % 2 !=0:  
            print(f"you entered valid odd number{odd}")
            break 
    except :
        print(f"{odd} is not a odd number")
 

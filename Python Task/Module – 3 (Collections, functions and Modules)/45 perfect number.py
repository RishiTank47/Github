# Write a Python function to check whether a number is perfect or not.

number_to_check = 28

if number_to_check <= 0:
    print(f"{number_to_check} is not a perfect number.")
else:
    divisors_sum = sum(divisor for divisor in range(1, number_to_check) if number_to_check % divisor == 0)
    
    if number_to_check == divisors_sum:
        print("is a perfect number.")
    else:
        print("is not a perfect number.") 

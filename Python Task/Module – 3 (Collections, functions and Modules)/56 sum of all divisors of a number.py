# Write a Python program to returns sum of all divisors of a number

input_number = 12

divisor_sum = 0
for i in range(1, input_number + 1):
    if input_number % i == 0:
        divisor_sum += i

print(divisor_sum) 

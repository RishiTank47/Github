# Write a Python function to calculate the factorial of a number (a nonnegative integer)

n = 5

factorial_result = 1

for i in range(1, n + 1):
    factorial_result *= i

print(f"The factorial of {n} is: {factorial_result}")

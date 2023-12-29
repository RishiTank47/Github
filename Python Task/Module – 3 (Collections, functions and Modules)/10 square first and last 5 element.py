""""Write a Python program to generate and print a list of first and last 5
elements where the values are square of numbers between 1 and 30"""

square_number=[]

for i in range(0,31):
    number=i**2
    square_number.append(number)

print(square_number)

print(f"Fist 5 element:{square_number[:5]}")

print(f"Last 5 element:{square_number[-5:]}")

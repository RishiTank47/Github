""""Write a Python program to generate and print a list of first and last 5
elements where the values are square of numbers between 1 and 30"""

print("**************************************\n")
square_element=[]

for i in range(0,31):
    square=i**2
    square_element.append(square)
print("\nSquare Elements:",square_element)

first_5element=square_element[:5]
print("\nFist 5 Element:",first_5element)

last_5element=square_element[-5:]
print("\nLast 5 Element:",last_5element,"\n")
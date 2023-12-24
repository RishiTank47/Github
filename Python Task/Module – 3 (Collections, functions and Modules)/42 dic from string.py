# Write a Python program to create a dictionary from a string.
input_string = 'w3resource'

letter_count = {}

for char in input_string:
    if char.isalpha(): 
        char_lower = char.lower()  
        letter_count[char_lower] = letter_count.get(char_lower, 0) + 1

print(letter_count)

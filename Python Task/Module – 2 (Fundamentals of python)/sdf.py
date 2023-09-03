def count_substring_occurrences(main_string, substring):
    # Use the count() method to count occurrences
    count = main_string.count(substring)
    return count

# Get input from the user
main_string = input("Enter a string: ")
substring = input("Enter a substring to count: ")

occurrences = count_substring_occurrences(main_string, substring)

print(f"The substring '{substring}' appears {occurrences} times in the string.")

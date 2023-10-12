# Input list of numbers
numbers = [15, 6, 7, 12, 22, 10]

# Input number to search
search_number = int(input("Enter a number to search: "))

# Initialize a variable to keep track of the position (index)
position = -1

# Search for the number in the list
for index, number in enumerate(numbers):
    if number == search_number:
        position = index
        break

# Check if the number was found
if position != -1:
    print("YES, found at index", position)
else:
    print("No")

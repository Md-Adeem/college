# Create an empty list
my_list = []

# Append elements to the list
my_list.append(1)
my_list.append(2)
my_list.append(3)
my_list.append(4)

# Print the list
print("List after appending elements:", my_list)

# Remove an element by value
my_list.remove(3)
print("List after removing 3:", my_list)

# Pop an element by index
popped_element = my_list.pop(1)
print("Popped element at index 1:", popped_element)
print("List after popping element:", my_list)

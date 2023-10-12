# Function to input 'n' numbers from the user
def input_numbers():
    n = int(input("Enter the number of elements: "))
    numbers = []
    for i in range(n):
        num = int(input(f"Enter number {i+1}: "))
        numbers.append(num)
    return numbers

# Function to sort numbers in ascending order
def ascending_sort(numbers):
    return sorted(numbers)

# Function to sort numbers in descending order
def descending_sort(numbers):
    return sorted(numbers, reverse=True)

# Input 'n' numbers
numbers = input_numbers()

# Sort and print in ascending order
sorted_asc = ascending_sort(numbers)
print("Ascending Order:", sorted_asc)

# Sort and print in descending order
sorted_desc = descending_sort(numbers)
print("Descending Order:", sorted_desc)

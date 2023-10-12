# Create a tuple
my_tuple = (1, 2, 3, 4, 5)

# Access elements of a tuple
print("Tuple:", my_tuple)
print("First element:", my_tuple[0])
print("Second element:", my_tuple[1])

# Attempting to modify a tuple will result in an error
try:
    my_tuple[0] = 6
except TypeError as e:
    print("Error:", e)

# Tuple packing and unpacking
x = 10
y = 20
tuple_packing = (x, y)
print("Tuple Packing:", tuple_packing)

a, b = tuple_packing
print("Tuple Unpacking - a:", a)
print("Tuple Unpacking - b:", b)

# Tuple slicing
slice_tuple = my_tuple[1:4]
print("Sliced Tuple:", slice_tuple)

# Tuple length
length = len(my_tuple)
print("Length of Tuple:", length)

# Tuple iteration
print("Iterating over Tuple:")
for item in my_tuple:
    print(item)

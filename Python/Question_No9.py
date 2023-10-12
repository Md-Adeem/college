# Create a dictionary
my_dict = {
    "name": "Alice",
    "age": 30,
    "city": "New York"
}

# Access values by keys
print("Name:", my_dict["name"])
print("Age:", my_dict["age"])
print("City:", my_dict["city"])

# Modify values
my_dict["age"] = 31
print("Updated Age:", my_dict["age"])

# Add a new key-value pair
my_dict["country"] = "USA"
print("Country:", my_dict["country"])

# Remove a key-value pair
del my_dict["city"]
print("Dictionary after removing 'city':", my_dict)

# Check if a key exists
if "name" in my_dict:
    print("'name' exists in the dictionary")

# Dictionary length
length = len(my_dict)
print("Dictionary Length:", length)

# Dictionary iteration (keys and values)
print("Iterating over keys and values:")
for key, value in my_dict.items():
    print(key, ":", value)

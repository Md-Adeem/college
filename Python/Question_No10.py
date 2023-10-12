import string

def is_pangram(input_string):
    # Create a set of lowercase alphabet characters
    alphabet_set = set(string.ascii_lowercase)
    
    # Convert the input string to lowercase and remove spaces
    input_string = input_string.lower().replace(" ", "")
    
    # Convert the input string to a set of characters
    input_set = set(input_string)
    
    # Check if the input_set contains all alphabet characters
    return alphabet_set.issubset(input_set)

# Input string from the user
input_str = input("Enter a string: ")

if is_pangram(input_str):
    print("The input string is a Pangram.")
else:
    print("The input string is not a Pangram.")

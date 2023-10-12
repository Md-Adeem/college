# Input two numbers from the user
num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))

# Addition
addition_result = num1 + num2
print("Addition:", num1, "+", num2, "=", addition_result)

# Subtraction
subtraction_result = num1 - num2
print("Subtraction:", num1, "-", num2, "=", subtraction_result)

# Multiplication
multiplication_result = num1 * num2
print("Multiplication:", num1, "*", num2, "=", multiplication_result)

# Division
if num2 != 0:
    division_result = num1 / num2
    print("Division:", num1, "/", num2, "=", division_result)
else:
    print("Division by zero is not allowed.")

# Floor Division (integer division)
if num2 != 0:
    floor_division_result = num1 // num2
    print("Floor Division:", num1, "//", num2, "=", floor_division_result)
else:
    print("Floor Division by zero is not allowed.")

# Modulus (remainder)
if num2 != 0:
    modulus_result = num1 % num2
    print("Modulus:", num1, "%", num2, "=", modulus_result)
else:
    print("Modulus by zero is not allowed.")

# Exponentiation
exponentiation_result = num1 ** num2
print("Exponentiation:", num1, "**", num2, "=", exponentiation_result)

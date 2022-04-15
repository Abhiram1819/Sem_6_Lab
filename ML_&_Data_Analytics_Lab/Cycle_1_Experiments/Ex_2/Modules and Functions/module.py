'''Modules and Functions'''

import ex0_module as calc
num1 = input("Enter Number 1: ")
num2 = input("Enter Number 2: ")
result = calc.add(int(num1), int(num2))
print("Sum of ", num1, " and ", num2, " is ", result)
result = calc.sub(int(num1), int(num2))
print("Subtraction of ", num1, " and ", num2, " is ", result)
result = calc.mul(int(num1), int(num2))
print("Multiplication of ", num1, " and ", num2, " is ", result)
result = calc.div(int(num1), int(num2))
print("Division of ", num1, " and ", num2, " is ", result)

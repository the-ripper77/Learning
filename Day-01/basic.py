''''
# pyutho was invented by Guido van Rossum in 1991 and is named after the British comedy group Monty Python.
# Python is a high-level, interpreted, and general-purpose programming language that emphasizes code readability and simplicity.
# Python supports multiple programming paradigms, including procedural, object-oriented, and functional programming.
# Python has a large standard library that provides many useful modules and functions for various tasks, such as file I/O, regular expressions, networking, and web development.
# Python is dynamically typed, which means that variable types are determined at runtime and do not need to be explicitly declared.
# Python is an open-source language, which means that it is free to use and distribute, and has a large community of developers who contribute to its development and maintenance.
# Python is a popular language for data science, machine learning, web development, and automation, and is used by many companies and organizations around the world, including Google, Facebook, NASA, and the CIA.
'''
# Python Indentation Example, refers to spaces, use to indicate a block of code, used to define a function, loop, or condition
if 5>2:
    print('i am five')
    
# Python Variable Example, used to store data values
x = 5
y = f'i am five'

# Python Statements Example, a line of code that performs a specific action
print(y)
# there  is also a smemicolon (;) to separate multiple statements on the same line
a = 10; b = 20; print(a + b) # This used rearly in python world

# There are three types of comments in python
# 1. Single-line comments
# This is a single-line comment
# 2. Multi-line comments
'''
This is a multi-line comment
It can span multiple lines
'''
# 3. Documentation strings (docstrings)
def example_function():
    """This is a docstring. It describes the function."""
    pass

# python use both single and double quotes to define a string, but they must be used in pairs
string1 = 'Hello, World!'
string2 = "Hello, World!"
print(string1)
print(string2)

#Casting is the process of converting one data type to another. In python, we can use the built-in functions to cast data types.`
''' For example, we can use the int() function to convert a string to an integer, the float() function to convert a string to a float, and the str() function to convert an integer or float to a string. '''
string_number = '123'
number = int(string_number) # This will convert the string '123' to the integer 123
print(number  + 10) # This will print 133

# There are many inbuilt functions in python, such as print(), len(), type(), etc.
print(len(string1)) # This will print the length of the string
print(type(string1)) # This will print the type of the variable

#Variables Nmaes in python must follow certain rules and conventions.
# Legal variable names in python
myvar = "John" # This is a valid variable name 
my_var = "John" # This is a valid variable name, and it is recommended to use snake_case for variable names in python, which means that words are separated by underscores.
_my_var = "John" # private variable, but not really private in python, just a convention to indicate that it should not be accessed outside of the class or module
myVar = "John" # Camel case Variable name, but not recommended in python
MYVAR = "John" # This is used for constants in python like ENVIRONMENT_VARIABLES
myvar2 = "John" # This is a valid variable name, but it is not recommended to use numbers in variable names, as it can be confusing and make the code less readable. It is better to use descriptive variable names that indicate the purpose of the variable.
'''
Illegal variable names in python
# 1. Variable names cannot start with a digit:
# 2. Variable names cannot contain spaces:
# 3. Variable names cannot contain special characters like @, #, $, etc.:
# 4. Variable names cannot be reserved keywords in python like 'if', 'else', 'for', etc.
# 5. Variable names cannot be the same as built-in function names like 'print', 'len', 'type', etc.
# 6. Variable names cannot contain hyphens (-):
# 7. Variable names cannot be too long or too short, it is recommended to use descriptive variable names that are easy to understand.
# 8. Variable names cannot be case-insensitive, which means that 'Variable' and 'variable' are considered different variables.
# 9. Variable names cannot be the same as module names in python like 'math', 'sys', 'os', etc.
# 10. Variable names cannot contain non-ASCII characters, it is recommended to use only ASCII characters in variable names to ensure compatibility across different systems and platforms. 
Example of illegal variable names
# 1. 2myvar = "John" # This is an illegal variable name
# 2. my var = "John" # This is an illegal variable name
# 3. my@var = "John" # This is an illegal variable name
# 4. if = "John" # This is an illegal variable name
# 5. print = "John" # This is an illegal variable name
# 6. my-var = "John" # This is an illegal variable name
# 7. x = "John" # This is an illegal variable name, because it is too short and does not indicate the purpose of the variable
# 8. Variable = "John" # This is an illegal variable name, because it is case-insensitive and can be confused with 'variable'
# 9. math = "John" # This is an illegal variable name, because it is the same as a module name in python
# 10. myvaré = "John" # This is an illegal variable name, because it contains a non-ASCII character
'''

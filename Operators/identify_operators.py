# Identity operators are used to compare the objects, not if they are equal, but if they are actually the same object, with the same memory location

# is operator (Returns True if both variables are the same object)
x = ["apple", "banana"]
y = ["apple", "banana"]
z = x

print(x is z) # Checks if both variables point to the same object in memory
print(x is y)
print(x == y) # Checks if the values of both variables are equal

# is not operator (	Returns True if both variables are not the same object)
x = ["apple", "banana"]
y = ["apple", "banana"]

print(x is not y)
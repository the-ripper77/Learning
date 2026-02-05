#Many Values to Multiple Variables
x, y, z = 'red', 'yellow', 'blue'; print(x); print(y); print(z)

# One Value to Multiple Variables
x = y = z = 'orange'; print(x); print(y); print(z)

# Unpack a Collection
fruits = ['apple', 'banana', 'cherry']
teas = ('green', 'black', 'milk')
a,b,c = teas
x, y, z = fruits
print(x); print(y); print(z)

# another way to print values:
print(a,b,c) # using comma to separate values in print function
print("{} {} {}".format(a, b, c)) # using format method
print("{0} {1} {2}".format(a, b, c)) # using positional arguments in format method
print("{a} {b} {c}".format(a=a, b=b, c=c)) # using keyword arguments in format method
print(a+b+c) # using concatenation
print(f"{a} {b} {c}") # using f-string
print(a, b, c, sep=', ') # using sep parameter in print function
print(', '.join([a, b, c])) # preferred way to print list or tuple values
print(', '.join({a, b, c})) # not recommended, because sets are unordered and can produce different results each time you run the code
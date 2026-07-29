fruits = ["apple", "banana", "cherry", "kiwi", "mango"]
newlist = []

for x in fruits:
    if "a" in x:
        newlist.append(x)
print(newlist)


# Using List Comprehension
newlist = [x for x in fruits if "a" in x]
print(newlist)

# Thw Syntax of List Comprehension
# newlist = [expression for item in iterable if condition == True]

# Using List Comprehension with if...else
newlist = [x if x != "banana" else "orange" for x in fruits]
print(newlist)

# with no if statement
newlist = [x for x in fruits]
print(newlist)

# Iterable can be any iterable object, like a list, tuple, set etc.
newlist = [x for x in range(10)]
print(newlist)
newlist = [x for x in range(10) if x < 5]
print(newlist)

# usingf Methods in List Comprehension
newlist = [x.upper() for x in fruits]
print(newlist)

# set all values in the new list to 'hello'
newlist = ['hello' for x in fruits]
print(newlist)

# Using List Comprehension with if...else and nested if
newlist = [x if x != "banana" else "orange" for x in fruits if x != "kiwi"]
print(newlist)


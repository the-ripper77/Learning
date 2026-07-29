# Copy a list in Python

list1 = [1, 2, 3, 4, 5]
print("Original list:", list1)

# Method 1: Using the list() constructor
list2 = list(list1)

# Method 2: Using slicing
list3 = list1[:]

# Method 3: Using the copy() method
list4 = list1.copy()

# Method 4: Using the copy module
import copy
list5 = copy.copy(list1)

# Method 5: Using list comprehension
list6 = [item for item in list1]

# Points to the list1, not a copy
list7 = list1

# Modifying the original list to show that copies are unaffected
list1.append(6)  

print("Copied list using list() constructor:", list2)
print("Copied list using slicing:", list3)
print("Copied list using copy() method:", list4)
print("Copied list using copy module:", list5)
print("Copied list using list comprehension:", list6)
print("Same list (not copied):", list7)


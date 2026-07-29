# List Methods
''''  For more information on list methods, you can refer to the official Python documentation: https://docs.python.org/3/tutorial/datastructures.html#more-on-lists '''

# Lists have a number of built-in methods that allow you to manipulate and interact with them. Here are some commonly used list methods:

# 1. append(): Adds an item to the end of the list.
my_list = [1, 2, 3]
my_list.append(4)
print("After append:", my_list)

# 2. extend(): Extends the list by appending elements from another iterable.
my_list.extend([5, 6])
print("After extend:", my_list)

# 3. insert(): Inserts an item at a given position.
my_list.insert(0, 9)  # Insert 9 at index 0
print("After insert:", my_list)

# 4. remove(): Removes the first occurrence of a value.
my_list.remove(3)  # Remove the value 3
print("After remove:", my_list)

# 5. pop(): Removes and returns an item at a given index (default is the last item).
popped_item = my_list.pop()
print("Popped item:", popped_item)

# 6. clear(): Removes all items from the list.
my_list.clear()
print("After clear:", my_list)

# 7. index(): Returns the index of the first occurrence of a value.
my_list = [1, 2, 3, 4, 5]
index_number = my_list.index(5)
print("Index of 5:", index_number)

# 8. count(): Returns the number of occurrences of a value.
count_of_2 = my_list.count(2)
print("Count of 2:", count_of_2)

# 9. sort(): Sorts the items of the list in place.
my_list.sort()
print("After sort:", my_list)

# 10. reverse(): Reverses the elements of the list in place.
my_list.reverse()
print("After reverse:", my_list)

# 11. copy(): Returns a shallow copy of the list.
copied_list = my_list.copy()
print("Copied list:", copied_list)

# 12. len(): Returns the number of items in the list.
length_of_list = len(my_list)
print("Length of list:", length_of_list)

# 13. sum(): Returns the sum of all items in the list (if they are numbers).
sum_of_list = sum(my_list)
# 14. max(): Returns the largest item in the list.
max_of_list = max(my_list)
# 15. min(): Returns the smallest item in the list.
min_of_list = min(my_list)
print("Sum of list:", sum_of_list)
print("Max of list:", max_of_list)
print("Min of list:", min_of_list)

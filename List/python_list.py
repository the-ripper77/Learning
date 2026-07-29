# List in Python is a collection which is ordered and changeable. Allows duplicate members.
mylist = ["apple", "banana", "cherry"]
print(mylist)

 # List items are indexed, the first item has index [0], the second item has index [1] etc.
print(mylist[0])

# Ordered means that the items have a defined order, and that order will not change unless you explicitly reorder the list. If you add new items to a list, the new items will be placed at the end of the list unless you specify a different position.
mylist.append("orange")

# Changeable means that we can change, add, and remove items in a list after it has been created.
mylist[1] = "blackcurrant"
print(mylist)

# Allow Duplicates means that since lists are indexed, lists can have items with the same value:
mylist.append("apple")
print(mylist)

#List Length
print(len(mylist)) # see how many items a list has
print(type(mylist)) # see the data type of a list

# List can contain different data types
mylist2 = ["apple", 1, True, "banana", 3.14]
print(mylist2)

# List constructor can be used to make a list, it is also a built-in function:
mylist3 = list(("apple", "banana", "cherry")) # note the double parentheses
print(mylist3)
# join lists
list1 =[1,2,3,4,5]
list2 =[6,7,8,9,10]

# using the + operator
list3 = list1 + list2

# using the extend() method
list1.extend(list2)

# using the unpacking operator
list4 = [*list1, *list2]

# using the itertools.chain() method
import itertools
list5 = list(itertools.chain(list1, list2))

# using list comprehension
list6 = [item for item in list1] + [item for item in list2]

# using the copy module
import copy
list7 = copy.copy(list1) + copy.copy(list2)

# Print the results
print("Joined list using + operator:", list3)
print("Joined list using extend() method:", list1)
print("Joined list using unpacking operator:", list4)
print("Joined list using itertools.chain() method:", list5)
print("Joined list using list comprehension:", list6)
print("Joined list using copy module:", list7)

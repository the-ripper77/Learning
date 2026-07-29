beatles = ['John Lennon', 'Paul McCartney', 'George Harrison', 'Ringo Starr']

# loop through the list
[print(members) for members in beatles]

# loop through the list with index number
for member in range(len(beatles)):
    print(beatles[member])
    
# loop through the list with index number and custom start index
for index, members in enumerate(beatles, start=1):
    print(index, members)

# loop through the list with index number and custom start index and custom separator and custom end
for index, members in enumerate(beatles, start=1):
    print(index, members, sep=': ', end=' | ')
    
# Using a While Loop
index = 0
while index < len(beatles):
    print(beatles[index])
    index += 1
    
# Using List Comprehension
[print(members) for members in beatles]
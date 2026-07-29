beatles = ['John Lennon', 'paul McCartney', 'george Harrison', 'Ringo Starr']

# Sort the list in ascending order
beatles.sort()
print(beatles)

# Sort the list in descending order
beatles.sort(reverse=True)
print(beatles)

# Reverse the order of the list
beatles.reverse()
print(beatles)

# custom sort the list with a key function
def sort_by_length(name):
    return len(name)
beatles.sort(key=sort_by_length)
print(beatles)

# case insensitive sort
beatles.sort(key=str.lower)
print(beatles)

# Sort the list with a custom key function
beatles.sort(key=lambda x: len(x))
print(beatles)

# Sort the list with a custom key function and reverse order
beatles.sort(key=lambda x: len(x), reverse=True)
print(beatles)

# Sort the list without modifying the original list
sorted_beatles = sorted(beatles)
print(sorted_beatles)
print(beatles)


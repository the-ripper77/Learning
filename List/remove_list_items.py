beatles = ['John Lennon', 'Paul McCartney', 'George Harrison', 'Ringo Starr']

# Remove specified item
beatles.remove('John Lennon')
print(beatles)

# Remove item at specified index
del beatles[0]
print(beatles)

# Remove last item
beatles.pop()
print(beatles)

# Clear the list
beatles.clear()
print(beatles)
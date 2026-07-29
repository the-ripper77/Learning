beatles = ['John Lennon', 'Paul McCartney', 'George Harrison', 'Ringo Starr']
print(beatles[1])
print(beatles[-1])
print(beatles[0:2])
print(beatles[0:])
print(beatles[:3])
print(beatles[::3])
print(beatles[0:4:3])

if 'John Lennon' in beatles:
    print('John Lennon is in the list')
else:
    print('John Lennon is not in the list')

index = beatles.index('George Harrison')
print('George Harrison is at index', index)

for beatle in beatles:
    print(beatle)
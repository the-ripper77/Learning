# capitalize()
a = f"Converts the first character to upper case"
print(a.capitalize())

#casefolad()
b =f'Converts the first character to upper case and the rest to lower case'
print(b.casefold())

#center()
c = f'Returns a centered string'
print(c.center(50))

#count()
d = f'Returns the number of times a specified value occurs in a string'
print(d.count('a'))

#encode()
e = f'Returns an encoded version of the string! 🇳🇵'
print(e.encode("utf-8"))

#endswith()
f = f'Returns true if the string ends with the specified value'
print(f.endswith('value'))

#expandtabs()
g = f'Sets the tab\t size of the\t string'
print(g.expandtabs(4))

#find()
h = f'Searches the string for a specified value and returns the position of where it was found'
print(h.find('the'))

#format()
i = 'Formats specified values in a string: {} and {}'
print(i.format('Hello', 'World'))

#format_map()
user_date = {'name': 'Pratik', 'age': 19}
j = 'Formats specified values in a string using a dictionary: {name} and {age}'
print(j.format_map(user_date)) # OR print(j.format_map({'name': 'Pratik', 'age': 19}))

#index()
k = f'Searches the string for a specified value and returns the position of where it was found'
print(k.index('the'))

#isalnum()
l = f'Returns True if all characters in the string are alphanumeric'
print(l.isalnum())

#isascii()
m = f'Returns True if all characters in the string are ascii characters'
print(m.isascii())

#isdecimal()
# Returns True if all characters in the string are decimals
n = f'12345'
print(n.isdecimal())

#isdigit()
o =f"Returns True if all characters in the string are digits"
print(o.isdigit())

#isdentifier()
# Returns True if the string is an identifier
p = f'HelloWorld'
print(p.isidentifier())

#islower()
q = f'returns true if all characters in the string are lower case'
print(q.islower())

#isnumeric()
r = f'Returns True if all characters in the string are numeric'
print(r.isnumeric())

#isprintable()
s = f'Returns True if all characters in the string are printable'
print(s.isprintable())

#isspace()
t = f'Returns True if all characters in the string are whitespaces'
print(t.isspace())

#istitle()
u = f'Returns True If The String Follows The Rules Of A Title'
print(u.istitle())

#isupper()
v = f'returns true if all characters in the string are upper case'
print(v.isupper())

#join()
w = ['Joins', 'the', 'elements', 'of', 'an', 'iterable', 'to', 'the', 'end', 'of', 'the', 'string']
print(' '.join(w))

#Ijust()
x = f'Returns a left justified version of the string'
print(x.ljust(50) + '^') # print(x.ljust(100, '-')) custom fill character

#lower()
y = f'Converts a string into lower case'
print(y.lower())

#Istrip()
z = f'Returns a left trim version of the string'
print(z.lstrip('ng') + ' Okay') # print(z.lstrip('H')) custom trim character

#maketrans()
print(f"Returns a translation table to be used in translation") # Very fast (built for bulk).
aa = str.maketrans("aeio", "4310") # We want: a -> 4, e -> 3, i -> 1, o -> 0
text = "apple banana icecream orange"
result = text.translate(aa)
print(result)

#partition()
ab = f"Returns a tuple where the string is pairted into three parts"

#replace()
ac = f"Returns a string where a specified value is replaced with a specified value"

#rfind()
ad = f"Searches the string for a specified value and returns the last postion of where it was found"

#rindex()
ae = f"Searches the string for a specified value and returns the last postion of where it was found"

#rjust()
af = f"Returns a right justified version of this strings"

#rpartition()
ag = f"Returns a tuple where the string is parted into three parts" 

#rsplit()
ah = f"Splits the string at the specified seperator, and returns a list"

#rstrip()
ai = f"Returns a right trim versin of the string"

#split()
aj = f"Splits the string at the specified seperator, and return list"

#splitlines()
ak = f"Splits the string at line breaks and returns a lsit"

#startswith()
al = f"Returns true if the string starts with the specified value"

#strip()
am = f"Returns atrimmed version of the string"

#swapcase()
an = f"Swaps cases, lower case becomes upper case and vice versa"

#title()
ao = f"Converts the first character of each word to upper case"

#translate()
ap = f"Returns a translated string"

#upper()
aq = f"Converts a string into upper case"

#Zfill()
ar = f"Fills the string with a specified number of 0 values at the begining"
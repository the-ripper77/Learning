# String Format
'''we cannot combine strings and numbers like this:
age = 36
#This will produce an error:
txt = "My name is John, I am " + age
print(txt)
'''

# F-Strings
age = 36
txt = f"My name is John, I am {age}"
print(txt)

name = "Pratik"
age = 19
txt = "My name is {}, I am {}".format(name, age)
print(txt)

# Placeholders and Modifiers
price = 59
txt = f"The price is {price} dollars"
print(txt)

price = 59
txt = f"The price is {price:.2f} dollars"
print(txt)

txt = f"The price is {20 * 59} dollars"
print(txt)

txt = "My name is {name}, I am {age}".format(name="Pratik", age=19)
print(txt)

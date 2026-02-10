# Escape Character

# Single Quote
txt = 'It\'s my laptop' # use for write word lik didn't, doesn't
print(txt)

# Backslash
txt = "This is a backslash: \\" # To print a single backslash
print(txt)

# New Line
txt = "Hello\nWorld" # Moves text to the next line
print(txt)

# Carriage Return
txt = "Hello\rWorld" # Moves the cursor to the start of the line and overwrites text
print(txt) # "World" overwrites "Hello"

# Tab
txt = "Name\tAge\tCountry" # Adds spacing like pressing the Tab key
print(txt)

# Backspace
txt = "Helloo\b" #Removes one character before it
print(txt)

# Form Feed (Rarely Used)
txt = "Hello\fWorld" # Creates a page break (mostly used in old printers)
print(txt)

# Octal value
txt = "\110\145\154\154\157" # Represents a character using octal (base-8) ASCII code
print(txt) # 110 = H .....

# Hex value
txt = "\x48\x65\x6c\x6c\x6f" # Represents a character using hexadecimal (base-16)
print(txt) # 0x48 = H..............

# Raw strings
txt = r"C:\new\test" # If you don’t want escape sequences to work
print(txt) # \n would have become a new line and \t would have added spacing
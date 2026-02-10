print(10 > 9) #True
print(10 == 9) #False
print(10 < 9)  #False

x = "Hello"
y = 15
print(bool(x)) #True
print(bool(y)) #True


x = "" # x = none
print(bool(x)) #False
y = 0 # y = none
print(bool(y)) #False

# Most Values are True
bool("abc")
bool(123)
bool(["apple", "cherry", "banana"])

# Values are False if it's null
bool(False)
bool(None)
bool(0)
bool("")
bool(())
bool([])
bool({})

# Functions can Return a Boolean
def myFunction() :
    return True
print(myFunction())

def myFunction() :
  return True
if myFunction():
  print("YES!")
else:
  print("NO!")
  
# built-in functions that return a boolean value
x = 200
print(isinstance(x, int))
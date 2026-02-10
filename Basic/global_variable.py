# Golbal Variables are variables that are defined outside of a function and can be accessed from any function within the same module.
# Global variables are usually defined at the top of the module, before any functions or classes
x = 'Pratik' # global variable
def my_function():
    print(f"Hello, {x}") # accessing global variable inside a function 
my_function()

# Gobal Keyword is used to declare a variable as global inside a function, which allows us to modify the value of the global variable from within the function.
def my_function():
    global x # declaring x as a global variable
    x = 'Pratik Giri' # modifying the value of the global variable x
my_function()
print(x) # printing the modified value of the global variable x

# what will be the Result of the following code: awesome or fantastic?
x = 'awesome'
def myfunc():
  x = 'fantastic'
myfunc()
print('Python is ' + x)

# what will be the Result of the following code: awesome or fantastic?
x = 'awesome'
def myfunc():
  x = 'fantastic'
  print('Python is ' + x)
myfunc()

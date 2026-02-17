x = 5
x += 3 # x = x + 3
x //= 3 # x = x // 3
x &= 3 # x = x & 3
x ^= 3 # x = x ^ 3
print(x := 3) # x = 3; print(x)

# Walrus Operator (Python 3.8 introduced the := operator. It assigns values to variables as part of a larger expression)
numbers = [1, 2, 3, 4, 5]
if (count := len(numbers)) > 3:
    print(f"List has {count} elements")
    
#Before Walrus introduce
numbers = [1, 2, 3, 4, 5]
count = len(numbers)  # Assignment happens here first
if count > 3:         # Then the check happens
    print(f"List has {count} elements")
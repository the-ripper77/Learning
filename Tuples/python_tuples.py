# Example code showing tuple usage in Python

# Create tuples
point = (10, 20)
colors = ("red", "green", "blue")

# Access tuple elements
x, y = point
first_color = colors[0]
last_color = colors[-1]

# Tuples are immutable
try:
    colors[0] = "yellow"
except TypeError as error:
    print("Cannot modify tuple:", error)

# Common tuple operations
mixed = (1, "two", 3.0, True)
print("Point:", point)
print("Coordinates:", x, y)
print("First color:", first_color)
print("Last color:", last_color)
print("Tuple length:", len(colors))
print("Mixed tuple:", mixed)
print("Slice:", colors[1:])

# Single-item tuple requires a trailing comma
single_item = (42,)
print("Single-item tuple:", single_item, type(single_item))

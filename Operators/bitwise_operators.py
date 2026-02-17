# Bitwise operators are used to compare (binary) numbers

x = 6 # binary rep:- 110 (0110)
y = 3 # binary rep:- 11 (0011)

# And '&' operator (Sets each bit to 1 if both bits are 1)
print(x & y)
''' 0110 & 0011 = 0010 = 0+0+2+0 = 2 '''

# Or '|' operator (Sets each bit to 1 if one of two bits is 1)
print(x | y)
''' 0110 | 0011 = 0111 = 0+4+2+1 = 7 '''

# XOR '^' operator (Sets each bit to 1 if only one of two bits is 1)
print(x ^ y)
''' 0110 ^ 0011 = 0101 = 0+4+0+1 = 5 '''

# NOT '~`' operator (Inverts all the bits)
print(~x)
''' result = -(x + 1) = -(6+1) = -7, it uses Two's Complement system'''

# Zero fill left shift '<<' operator (Shift left by pushing zeros in from the right and let the leftmost bits fall off)
print(x << y)
''' 0110 << 3 = 110000 = 0+32+16+0+0+0+0 = 48
x << n is x * 2^n. Each shift left adds a 0 to the binary end.'''

# Signed right shift '>>' operator (Shift right by pushing copies of the leftmost bit in from the left, and let the rightmost bits fall off)
print(x >> y)
''' Start with 6: 0110
Shift 1: 0011 (Decimal 3)
Shift 2: 0001 (Decimal 1)
Shift 3: 0000 (Decimal 0)
Result: 0
Mathematically, x >> y is the same as floor division: x // 2^y.
Since 6//8 = 0, the answer is 0.
x >> n is x // 2^n. Each shift right "deletes" the last bit.
'''

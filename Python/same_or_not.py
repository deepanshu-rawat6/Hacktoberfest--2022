#Check to see if a string has the same amount of 'x's and 'o's. The method must return a boolean and be case insensitive. The string can contain any char.

def xo(string):
    cx = 0
    co = 0
    for char in string.lower():
        if char == 'x':
            cx += 1
        elif char == 'o':
            co += 1
    if cx == co:
        return True
    else:
        return False

print(xo('xoxox'))
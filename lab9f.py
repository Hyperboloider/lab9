def matches(string, symbols):
    match = []
    for word in string:
        if word[0] in symbols and word[-1] in symbols:
            match.append(word)
    return match

def inp(lst, msg = ''):
    lst = (input(msg)).split()
    return lst

def output(lst):
    for item in lst:
        print(item)
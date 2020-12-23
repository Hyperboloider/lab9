def matches(string, symbols):
    match = []
    for word in string:
        for symbol_f in symbols:
            if word[0] == symbol_f:
                for symbol_l in symbols:
                    if word[-1] == symbol_l:
                        match.append(word)
    return match

def inp(msg = ''):
    temp =''
    lst = []
    string = input(msg)
    for letter in string:
        if letter != ' ':
            temp += letter
        else:
            lst.append(temp)
            temp = ''
    lst.append(temp)
    return lst

def output(lst):
    print('result: ')
    for item in lst:
        print(item)
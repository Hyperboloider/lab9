from lab9f import matches, inp, output


string, symbols, match = [], [], []

string = inp(string, "string: ")
symbols = inp(symbols, "symbols: ")

match = matches(string, symbols)

output(match)
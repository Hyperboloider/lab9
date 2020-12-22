#include <string.h>
#include <iostream>
#include <conio.h>
#include "lab9-funcs.cpp"
using namespace std;


int words(char*, array);
int appropriate(array, int, array, int, array);
void output(array, int);

int main()
{
    char s[N],
         symbols[N];
    array arr_words,
          arr_symbols,
          arr_appropriate;
    int count_words,
        count_symbols,
        count_matches;
    puts("Insert the sentance: ");
    gets(s);
    puts("Insert the symbols: ");
    gets(symbols);

    count_words = words(s, arr_words);
    count_symbols = words(symbols, arr_symbols);    
    count_matches = appropriate(arr_words,count_words, arr_symbols, count_symbols, arr_appropriate);

    output(arr_appropriate, count_matches);
    return 0;
}
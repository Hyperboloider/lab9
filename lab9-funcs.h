#include <string.h>
#include <iostream>
#include <conio.h>
using namespace std;

const int N = 127;
typedef char array[N/2+1][N];

int words(char* searched_str, array words)
{

    int count = 0;
    char *separators = "., ";
    char *ptr;
    char *nextptr = NULL;

    ptr = strtok_s(searched_str, separators, &nextptr);

        while (ptr) 
        {
            strcpy_s(words[count], sizeof words[count], ptr);
            count++;
            ptr = strtok_s(0, separators, &nextptr);
        }

    return count;
}

int appropriate(array str_from, int from_size, array compare_to, int compare_size, array matches)
{
    int count = 0;

    for (int i=0; i< from_size; i++)
        for (int j=0; j<compare_size; j++)
        {
            if (str_from[i][0] == compare_to[j][0])
            {
                for (int k=0; k<compare_size; k++)
                {
                    int position = strlen(str_from[i]) - 1;
                    
                    if (str_from[i][position] == compare_to[k][0])
                    {
                        strcpy_s(matches[count], sizeof matches[count], str_from[i]);
                        count++;
                    }
                }
            }  
        }
    return count;
}

void output(array arr, int size)
{
    for (int i=0; i<size; i++)
        puts(arr[i]);
}
/**
 * Program that determines if an input string has all 
 * unique characters
 */

#include <stdio.h>
#include <stdbool.h>

bool is_unique(char *str);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./unique string\n");
        return 1;
    }

    bool result = is_unique(argv[1]);

    if (result)
        printf("String is unique!\n");
    else
        printf("String is not unique\n");
}

bool is_unique(char *str)
{
    int arr[0xff] = { 0 };

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (arr[(int)str[i]] != 0)
            return false;
        
        arr[(int)str[i]] = 1;
    }

    return true;
}
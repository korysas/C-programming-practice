#include <stdio.h>
#include <string.h>

void reverse(char *str);

int main(int argc, char *argv[])
{
    // ensure correct usage
    if (argc != 2)
    {
        printf("Usage: ./reverse_string str");
        return 1;
    }

    reverse(argv[1]);

    printf("%s\n", argv[1]);
}

void reverse(char *str)
{
    int len = strlen(str);

    int j;
    char temp;
    for (int i = 0; i < len / 2; i++)
    {
        j = len - i - 1;

        // make the swap
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
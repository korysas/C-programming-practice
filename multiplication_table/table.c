/*
 * Prints a multiplication table for a given size
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // verify correct program usage
    if (argc != 2) {
        printf("usage: ./table size");
        return 1;
    }

    // get user input as integer
    int size = atoi(argv[1]);

    for (int i = 1; i < size + 1; i++) {
        for (int j = 1; j < size + 1; j++) {
            printf("%3d ", i * j);
        }
        printf("\n");
    }
}
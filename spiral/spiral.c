#include <stdio.h>

/**
 * Program that prints a 2D array in spiral order
 */
void print_spiral(int rows, int cols, int arr[][cols]);

int main(void)
{
    // initialize array to test with
    // int arr[5][5] = {
    //     {1,  2,  3,  4,  5 },
    //     {6,  7,  8,  9,  10},
    //     {11, 12, 13, 14, 15},
    //     {16, 17, 18, 19, 20},
    //     {21, 22, 23, 24, 25}
    // };

    int arr[5][4] = {
        {1,  2,  3,  4 },
        {6,  7,  8,  9 },
        {11, 12, 13, 14},
        {16, 17, 18, 19},
        {21, 22, 23, 24}
    };

    print_spiral(5, 4, arr);
}

void print_spiral(int rows, int cols, int arr[][cols])
{
    int row_start = 0, row_end = rows - 1;
    int col_start = 0, col_end = cols - 1;
    int i;

    while (row_start <= row_end && col_start <= col_end)
    {
        for (i = col_start; i <= col_end; i++)
        {
            printf("%d ", arr[row_start][i]);
        }
        row_start++;

        for (i = row_start; i <= row_end; i++)
        {
            printf("%d ", arr[i][col_end]);
        }
        col_end--;

        for (i = col_end; i > col_start - 1; i--)
        {
            printf("%d ", arr[row_end][i]);
        }
        row_end--;

        for (i = row_end; i > row_start - 1; i--)
        {
            printf("%d ", arr[i][col_start]);
        }
        col_start++;
    }
}
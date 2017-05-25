/**
 * Program that implements the bubble sort algorithm on integer array
 */

#include <stdio.h>

void sort(int arr[], int length);

int main(void)
{
    // make some arrays to test sorting
    int test_1[] = { 3, 5, 1, 7, 4, 9, 2, 10, 23, 6, 11 };

    // call sort function
    sort(test_1, 11);

    // print back arrays
    for (int i = 0; i < 11; i++)
    {
        printf("%d, ", test_1[i]);
    }
}

// function that implements bubble sort
void sort(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = i + 1; j < length; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
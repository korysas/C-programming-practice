/**
 * Program that prints a 2D array in spiral order
 */
print_spiral(int cols, arr[][cols]);

int main(void)
{
    // initialize array to test with
    int arr[5][5] = {
        {1,  2,  3,  4,  5 },
        {6,  7,  8,  9,  10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    print_spiral(5, arr);
}

print_spiral(int rows, int cols, arr[][cols])
{
    /**
     * represent horizontal movement with an integer
     * negative means right-to-left traversal, positive means left-to-right traversal
     */
    int horizontal;
    /**
     * negative means bottom-to-top traversal, positive means top-to-bottom traversal
     */
    int vertical;

    // let's start at the top left
    horizontal = 1;
    vertical = 1;

    int i, j;
    for (i = 0; i < rows; i++)
    {
        
    }
}
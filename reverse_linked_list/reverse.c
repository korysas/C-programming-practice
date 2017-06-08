/*
 * Program that prints a linked list in reverse
 */

#include <stdio.h>

struct Node
{
    int data;
    struct *Node;
}
Node;

// Prototypes
Node *init_list(int arr[]);
void dispose_list(Node *node);
void print_in_reverse(Node *node);

int main(void)
{
    // linked list will be based from this array
    int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    // initialize list and get a reference to the list head
    Node *head = init_list(arr);

    // do the printing work
    print_in_reverse(head);

    // clean up and free the memory that has been allocated for list
    dispose_list(head);
}

/*
 * accepts an integer array and will create a linked list
 * based on this array
 *
 * returns a pointer to the head of the linked list
 */
Node *init_list(int arr[])
{
    
}


/*
 * calls free() on each Node in the linked list
 * this function must be called if a list is created with
 * init_list()
 *
 * pass in a pointer to the head of the list
 */
void dispose_list(Node *node)
{

}

/*
 * prints a linked list in reverse order
 *
 * pass in the head of the list
 */
void print_in_reverse(Node *node)
{

}
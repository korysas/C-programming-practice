/*
 * Program that prints a linked list in reverse
 */

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Prototypes
struct Node *init_list(int arr[], int len);
void dispose_list(struct Node *node);
void print_in_reverse(struct Node *node);

int main(void)
{
    // linked list will be based from this array
    int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    // get length of  array
    int len = sizeof(arr) / sizeof(arr[0]);

    // initialize list and get a reference to the list head
    struct Node *head = init_list(arr, len);

    // do the printing work
    print_in_reverse(head);
    printf("\n");

    // clean up and free the memory that has been allocated for list
    dispose_list(head);
}

/*
 * accepts an integer array and will create a linked list
 * based on this array
 *
 * returns a pointer to the head of the linked list
 */
struct Node *init_list(int arr[], int len)
{
    // allocate memory for the head of the list
    struct Node *head = malloc(sizeof(struct Node));
    head->data = arr[0];
    head->next = NULL;

    /* 
     * iterate on array and malloc node for each element
     * skip first element becasue head has already been created 
     */
    struct Node *new_node;
    struct Node *current = head;
    for (int i = 1; i < len; i++) {
        // create and init a new node
        new_node = malloc(sizeof(struct Node));
        new_node->data = arr[i];
        new_node->next = NULL;

        // set the next node in list
        current->next = new_node;

        // update the reference to our current node
        current = current->next;
    }

    return head;
}


/*
 * calls free() on each Node in the linked list
 * this function must be called if a list is created with
 * init_list()
 *
 * pass in a pointer to the head of the list
 */
void dispose_list(struct Node *node)
{

}

/*
 * prints a linked list in reverse order
 *
 * pass in the head of the list
 */
void print_in_reverse(struct Node *node)
{
    if (node->next != NULL) {
        print_in_reverse(node->next);
    }

    printf("%d ", node->data);
}
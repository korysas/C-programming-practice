/**
 * Program that remvoes duplicates from an unsorted linked list
 */

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

void remove_dups(struct Node *node);

void print_list(struct Node *node);

void unload_list(struct Node *node);

int main(void)
{
    // create array to be turned into linked lists
    int arr[] = { 2, 7, 6, 2, 4, 2, 8, 9, 1 };
    // int arr[] = { 1, 2, 4, 5, 6, 7, 8, 8, 10 };

    int len = sizeof(arr) / sizeof(arr[0]);

    // print arrays
    int i;
    printf("Printing Array:\n");
    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // create linked lists
    struct Node *head = malloc(sizeof(struct Node));
    
    // create node that will be used for list traversal
    struct Node *node = head;

    for (i = 0; i < len; i++)
    {
        node->data = arr[i];
        node->next = malloc(sizeof(struct Node));
        node = node->next;
        node->next = NULL;
    }

    // free the traversal node, we still have reference to head
    free(node);

    printf("Printing Linked List: \n");
    print_list(head);
    printf("\n");

    unload_list(head);
}

void remove_dups(struct Node *node)
{
    
}

void print_list(struct Node *node)
{
    if (node->next == NULL)
        return;

    printf("%d ", node->data);
    print_list(node->next);
}

void unload_list(struct Node *node)
{
    if (node->next == NULL)
        return;
    
    unload_list(node->next);
    free(node);
}
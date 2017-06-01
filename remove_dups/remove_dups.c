/*
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
    int arr[] = { 2, 7, 6, 2, 4, 2, 8, 9, 1, 6, 4 };
    // int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    // int arr[] = {1,1,1,1,1,1};

    int len = sizeof(arr) / sizeof(arr[0]);

    // print arrays
    int i;
    printf("Printing Array:\n");
    for (i = 0; i < len; i++)
        printf("%d ", arr[i]);

    printf("\n\n");

    // create linked lists
    struct Node *head = malloc(sizeof(struct Node));
    
    // create node that will be used for list traversal
    struct Node *node = head;

    for (i = 0; i < len; i++) {
        node->data = arr[i];
        node->next = malloc(sizeof(struct Node));
        node = node->next;
        node->next = NULL;
    }

    // free the traversal node, we still have reference to head
    free(node);

    printf("Printing Linked List: \n");
    print_list(head);
    printf("\n\n");

    remove_dups(head);

    printf("Printing modified list:\n");
    print_list(head);
    printf("\n");

    unload_list(head);
}

/*
 * function traverses through a linked list
 *
 * if the value at the current node has already been placed in the array
 * then the follower node should point to the node ahead of the current node
 *
 * otherwise mark that the value at the current node has already been visited
 * and advance the list pointers
 */
void remove_dups(struct Node *node)
{
    int arr[1000] = {0};

    struct Node *leader = node;
    struct Node *follower = node;

    while (leader != NULL) {
        if (arr[leader->data] == 0) {
            arr[leader->data] = 1;
            follower = leader;
            leader = leader->next;
        } else {
            follower->next = leader->next;
            // free(leader);
            leader = follower->next;
        }
    }
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
/*
 * Program that implements breadth first search on
 * on a binary tree stucture
 */

#include <stdio.h>
#include <stdbool.h>

struct Node
{
    int data;
    struct Node *children[2];
};

// prototypes
struct Node *init_tree(void);
bool search(struct Node *node);
void dispose_tree(struct Node *node);
struct Node *create_node(int data);

int main(void)
{
    // initialize the tree
    struct Node *root = init_tree();

    // search the tree

    // dispose of the tree
}

/*
 * initializes a hard coded tree structure and returns a pointer
 * to the root node of the tree
 */
struct Node *init_tree(void)
{
    // allocate memory for root node
    struct Node *root = create_node(6);

    // create two children of root node
    struct Node *c1 = create_node(2);
    struct Node *c2 = create_node(7);

    // create two children of c1
    
}

/*
 * searches a tree in a breadth first approach
 * return true if found, false otherwise
 */
bool search(struct Node *node)
{

}

/*
 * frees any allocated memory used by the structure
 */
void dispose_tree(struct Node *node)
{

}

/*
 * creates an individual node
 * pass in the data for the node
 * returns a pointer to the node
 */
struct Node *create_node(int data)
{
    // allocate memory for the node
    struct Node *node = malloc(sizeof(struct Node));

    // set the data for the node
    node->data = data;

    // initialize the children of this node to NULL
    node->children[0] = NULL;
    node->children[1] = NULL;

    return node;
}
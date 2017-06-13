/*
 * Implementes stack abstract data strucutre
 *
 * push and pop methods
 */

#include <stdio.h>

struct Stack
{
    int data;
    struct Stack *next;
};

// prototypes
void push(struct Stack *stack, int data);
int pop(struct Stack *stack);

int main(void)
{
    printf("allocating memory for stack\n")
    struct Stack *stack = malloc(sizeof(struct Stack));

    printf("initializing first element to 1");
    stack->data = 1;
    stack->next = NULL;

    
}

/*
 * pushes data onto the stack
 */
void push(struct Stack *stack, int data)
{

}

/*
 * get the data from the top element in the stack and
 * then discards the top element
 */
int pop(struct Stack *stack)
{

}
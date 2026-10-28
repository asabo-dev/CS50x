// Linked list
// Code demonstrates how to stitch together nodes
// using pointers and temporary variables (n and ptr)
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(void)
{
    // Data type for linked list is:
    // "node *" .i.e. the address of the first node in the list
    node *list = NULL;

    for (int i = 0; i < 3; i++)
    {
        // Create a temporary node with a variable 'n'
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        /*
        Direference 'n' and go inside of it using (*n). notation
        This (*n). notation can be replaced by ->
        (*n).number = get_int("Number: ");
        (*n).next = NULL;
        */
        // This (*n). notation can be replaced by ->
        // i.e. Go to 'n' and point at the 'number'/'next' field respectively
        n->number = get_int("Number: ");
        n->next = NULL;

        // Prepend node to list
        n->next = list;
        list = n;
    }

    // Print Numbers
    // Create a new variable 'ptr' to point to the same value 'list' is pointing
    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }
    /*
    Using a for loop for the same operation
    for (node *ptr = list; ptr != NULL; ptr->next)
    {
        printf("%i\n"), ptr->number);
    }
    */

    return 0;
}


/*
Terminal Output
$ make list
$ ./list
Number: 1
Number: 2
Number: 3
3
2
1
$ 
*/
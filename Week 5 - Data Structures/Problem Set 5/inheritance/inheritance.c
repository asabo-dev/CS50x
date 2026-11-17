// Simulate genetic inheritance of blood type
// In this exercise, TODOs indicate the code I had to write
#define _DEFAULT_SOURCE
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Each person has two parents and two alleles
typedef struct person
{
    struct person *parents[2];
    char alleles[2];
} person;

const int GENERATIONS = 3;
const int INDENT_LENGTH = 4;

person *create_family(int generations);
void print_family(person *p, int generation);
void free_family(person *p);
char random_allele();

int main(void)
{
    // Seed random number generator
    srandom(time(0));

    // Create a new family with three generations
    person *p = create_family(GENERATIONS);

    // Print family tree of blood types
    print_family(p, 0);

    // Free memory
    free_family(p);
}

// Create a new individual with `generations`
person *create_family(int generations)
{
    // TODO: Allocate memory for new person
    person *new_person = malloc(sizeof(person));
    if (new_person == NULL)
    {
        return NULL;
    }

    // If there are still generations left to create
    if (generations > 1)
    {
        // Create two new parents for current person by recursively calling create_family
        person *parent0 = create_family(generations - 1);
        person *parent1 = create_family(generations - 1);

        // Check whether parent allocation succeeded
        if (parent0 == NULL || parent1 == NULL)
        {
            free_family(parent0);
            free_family(parent1);
            free(new_person);

            return NULL;
        }

        // TODO: Set parent pointers for current person
        new_person->parents[0] = parent0;
        new_person->parents[1] = parent1;

        // TODO: Randomly assign current person's alleles based on the alleles of their parents
        new_person->alleles[0] = parent0->alleles[random() % 2];
        new_person->alleles[1] = parent1->alleles[random() % 2];
    }

    // If there are no generations left to create
    else
    {
        // TODO: Set parent pointers to NULL
        new_person->parents[0] = NULL;
        new_person->parents[1] = NULL;

        // TODO: Randomly assign alleles
        new_person->alleles[0] = random_allele();
        new_person->alleles[1] = random_allele();
    }

    // TODO: Return newly created person
    return new_person;
}

// Free `p` and all ancestors of `p`.
void free_family(person *p)
{
    // TODO: Handle base case
    // Stop when there's no person to process
    if (p == NULL)
    {
        return;
    }

    // TODO: Free parents recursively
    free_family(p->parents[0]);
    free_family(p->parents[1]);

    // TODO: Free child
    free(p);
}

// Print each family member and their alleles.
void print_family(person *p, int generation)
{
    // Handle base case
    if (p == NULL)
    {
        return;
    }

    // Print indentation
    for (int i = 0; i < generation * INDENT_LENGTH; i++)
    {
        printf(" ");
    }

    // Print person
    if (generation == 0)
    {
        printf("Child (Generation %i): blood type %c%c\n", generation, p->alleles[0], p->alleles[1]);
    }
    else if (generation == 1)
    {
        printf("Parent (Generation %i): blood type %c%c\n", generation, p->alleles[0], p->alleles[1]);
    }
    else
    {
        for (int i = 0; i < generation - 2; i++)
        {
            printf("Great-");
        }
        printf("Grandparent (Generation %i): blood type %c%c\n", generation, p->alleles[0], p->alleles[1]);
    }

    // Print parents of current generation
    print_family(p->parents[0], generation + 1);
    print_family(p->parents[1], generation + 1);
}

// Randomly chooses a blood type allele.
char random_allele()
{
    int r = random() % 3;
    if (r == 0)
    {
        return 'A';
    }
    else if (r == 1)
    {
        return 'B';
    }
    else
    {
        return 'O';
    }
}

/*
CONCEPT	    WHERE IT WAS APPLIED
malloc()	Creating each person
Pointers	Connecting children to parents
Structs	    Storing each person's information
Arrays	    Storing two parents and two alleles
Recursion	Building the family tree
Base case	Stopping recursion
free()	    Releasing allocated memory
Valgrind	Checking memory management
*/

/*
Check for memory leaks after: void free_family(person *p)

inheritance/ $ make inheritans
inheritance/ $ valgrind --leak-check=full --show-leak-kinds=all ./inheritans
==4052== Memcheck, a memory error detector
==4052== Copyright (C) 2002-2022, and GNU GPL'd, by Julian Seward et al.
==4052== Using Valgrind-3.22.0 and LibVEX; rerun with -h for copyright info
==4052== Command: ./inheritans
==4052== 
Child (Generation 0): blood type OA
    Parent (Generation 1): blood type BO
        Grandparent (Generation 2): blood type BB
        Grandparent (Generation 2): blood type AO
    Parent (Generation 1): blood type AA
        Grandparent (Generation 2): blood type AB
        Grandparent (Generation 2): blood type AB
==4052== 
==4052== HEAP SUMMARY:
==4052==     in use at exit: 0 bytes in 0 blocks
==4052==   total heap usage: 7 allocs, 7 frees, 168 bytes allocated
==4052== 
==4052== All heap blocks were freed -- no leaks are possible
==4052== 
==4052== For lists of detected and suppressed errors, rerun with: -s
==4052== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
inheritance/ $ 
*/

/*
Terminal Output
inheritance/ $ make inheritance
inheritance/ $ ./inheritance
Child (Generation 0): blood type OO
    Parent (Generation 1): blood type OA
        Grandparent (Generation 2): blood type OO
        Grandparent (Generation 2): blood type OA
    Parent (Generation 1): blood type OO
        Grandparent (Generation 2): blood type AO
        Grandparent (Generation 2): blood type OB

inheritance/ $ style50 inheritance.c

inheritance/ $ valgrind --leak-check=full ./inheritance
==24940== Memcheck, a memory error detector
==24940== Copyright (C) 2002-2022, and GNU GPL'd, by Julian Seward et al.
==24940== Using Valgrind-3.22.0 and LibVEX; rerun with -h for copyright info
==24940== Command: ./inheritance
==24940== 
Child (Generation 0): blood type AB
    Parent (Generation 1): blood type BA
        Grandparent (Generation 2): blood type BB
        Grandparent (Generation 2): blood type AA
    Parent (Generation 1): blood type AB
        Grandparent (Generation 2): blood type BA
        Grandparent (Generation 2): blood type AB
==24940== 
==24940== HEAP SUMMARY:
==24940==     in use at exit: 0 bytes in 0 blocks
==24940==   total heap usage: 7 allocs, 7 frees, 168 bytes allocated
==24940== 
==24940== All heap blocks were freed -- no leaks are possible
==24940== 
==24940== For lists of detected and suppressed errors, rerun with: -s
==24940== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

inheritance/ $ check50 cs50/problems/2026/x/inheritance
Results for cs50/problems/2026/x/inheritance generated by check50 v4.0.0.dev0
:) inheritance.c exists
:) inheritance.c compiles
:) inheritance compiles
:) create_family creates correct size of family
:) create_family follows inheritance rules 1
:) create_family follows inheritance rules 2
:) create_family follows inheritance rules 3
:) create_family follows inheritance rules 4
:) free_family results in no memory leakages
inheritance/ $ 
*/
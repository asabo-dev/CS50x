// Free up memory after malloc()
// Check for NULL
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x = malloc(3 * sizeof(int));
    if (x == NULL)
    {
        return 1;
    }
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;
    free(x);
    return 0;
}


/*
Terminal Output
$ make memory
$ ./memory
$ valgrind ./memory
==16745== Memcheck, a memory error detector
==16745== Copyright (C) 2002-2022, and GNU GPL'd, by Julian Seward et al.
==16745== Using Valgrind-3.22.0 and LibVEX; rerun with -h for copyright info
==16745== Command: ./memory
==16745==
==16745==
==16745== HEAP SUMMARY:
==16745==     in use at exit: 0 bytes in 0 blocks
==16745==   total heap usage: 1 allocs, 1 frees, 12 bytes allocated
==16745==
==16745== All heap blocks were freed -- no leaks are possible
==16745==
==16745== For lists of detected and suppressed errors, rerun with: -s
==16745== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
$
*/

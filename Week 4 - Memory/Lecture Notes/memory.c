// Demonstrates memory errors via valgrind
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x = malloc(3 * sizeof(int));
    x[1] = 72;
    x[2] = 73;
    x[3] = 33;
}


/*
Terminal Output
$ make memory
$ ./memory
$ valgrind ./memory
==11573== Memcheck, a memory error detector
==11573== Copyright (C) 2002-2022, and GNU GPL'd, by Julian Seward et al.
==11573== Using Valgrind-3.22.0 and LibVEX; rerun with -h for copyright info
==11573== Command: ./memory
==11573==
==11573== Invalid write of size 4
==11573==    at 0x109170: main (memory.c:10)
==11573==  Address 0x4ba004c is 0 bytes after a block of size 12 alloc'd
==11573==    at 0x4846828: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==11573==    by 0x109151: main (memory.c:7)
==11573==
==11573==
==11573== HEAP SUMMARY:
==11573==     in use at exit: 12 bytes in 1 blocks
==11573==   total heap usage: 1 allocs, 0 frees, 12 bytes allocated
==11573==
==11573== 12 bytes in 1 blocks are definitely lost in loss record 1 of 1
==11573==    at 0x4846828: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==11573==    by 0x109151: main (memory.c:7)
==11573==
==11573== LEAK SUMMARY:
==11573==    definitely lost: 12 bytes in 1 blocks
==11573==    indirectly lost: 0 bytes in 0 blocks
==11573==      possibly lost: 0 bytes in 0 blocks
==11573==    still reachable: 0 bytes in 0 blocks
==11573==         suppressed: 0 bytes in 0 blocks
==11573==
==11573== For lists of detected and suppressed errors, rerun with: -s
==11573== ERROR SUMMARY: 2 errors from 2 contexts (suppressed: 0 from 0)
$
*/

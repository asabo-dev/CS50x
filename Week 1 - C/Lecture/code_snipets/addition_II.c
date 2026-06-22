// In order to add large number change data type from int to long
// '%li' is a placeholder for big integers.

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long x = get_long("x: ");

    long y = get_long("y: ");

    printf("%li\n", x + y);
}

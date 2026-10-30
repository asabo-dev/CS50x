// Impement hash function
// The function takes a string as input and return integer as output
#include <ctype.h>

// int hash(char *name) is refined below
// unsigned ensures that the return value cannot be negative
// 'const' ensures that the string (name) cannot be changed
unsigned int hash(const char* name)
{
    // ASCII arithmetic
    return toupper(name[0] - 'A');   
}

/*
This returns a number between 0 and 25
[0] = A, [25] = Z according to the alphabet
*/
// Print out the addresses of string characters.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "Hi!";
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
}

/*
Terminal Output
This prints out the addresses of each character in the string.

$ ./addresses
0x55a1a68e0004
0x55a1a68e0004
0x55a1a68e0005
0x55a1a68e0006
0x55a1a68e0007
$ 
sting s is the same thing as char *s, pointing to an address in Memory
*/
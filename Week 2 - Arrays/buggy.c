#include <stdio.h>

int main(void)
{
    name = get_string("What's your name? ");
    printf("Hello, world!\n");
}

/*
Terminal Output
$ make buggy
buggy.c:5:5: error: use of undeclared identifier 'name'
    5 |     name = get_string("What's your name? ");

Output shows that there's a bug on line 5; the variable 'name' was not given a type. 
    */
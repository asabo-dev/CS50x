#include <stdio.h>

int main(void)
{
    string name = get_string("What's your name? ");
    printf("Hello, world!\n");
}

/*
Terminal Output
$ make buggy
buggy.c:5:5: error: use of undeclared identifier 'string'; did you mean 'stdin'?
    5 |     string name = get_string("What's your name? ");
      |     ^~~~~~
      |     stdin

Output shows that there's a bug on line 5,
because the proper library (cs50) was not imported. 
    */
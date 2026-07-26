// Indexing variables (better design)
#include <stdio.h>

int main(void)
{
    // Initialize variable 'scores'
    int scores[3];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    printf("%f\n", (scores[0] + scores[1] + scores[2])/(float) 3);
}

/*
- *** This is a better design because the memory provides a big chunk to store the variables, 
- instead of storing the variables in 3 seperate chunks of memory.***
Terminal Output
$ make scores
$ ./scores
59.333332
$ 
*/
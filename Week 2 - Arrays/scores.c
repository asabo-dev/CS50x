// Check 'type' in order to get correct output
#include <stdio.h>

int main(void)
{
    int score_1 = 72;
    int score_2 = 73;
    int score_3 = 33;

    printf("%f\n", (score_1 + score_2 + score_3)/(float) 3);
}

/*
Terminal Output
$ pwd
/workspaces/89647569
$ code scores.c
$ make scores
$ ./scores
59 
- ***The decimal points are truncated because int type was used instead of float ***
$ 
$ make scores
scores.c:9:20: error: format specifies type 'double' but the argument has type 'int' [-Werror,-Wformat]
    9 |     printf("%f\n", (score_1 + score_2 + score_3)/3);
      |             ~~     ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
      |             %d
1 error generated.
make: *** [<builtin>: scores] Error 1
- *** When "%f" is passed in printf(), it throws an error ***
$ 
$ make scores
$ ./scores
59.333333
- *** One solution is to convert the divisor into a float i.e. 3.0 ***
$ make scores
$ ./scores
59.333332
- *** Another solution is type casting i.e (float) 3 ***
$ 
*/
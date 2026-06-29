// Integer overflow example
// Computer memomry has a finite space, it can eventually run out of space to compute.
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int dollars = 1;
    // Create an infinite loop.
    while (true)
    {
        char c = get_char("Here's $%i. Double it and give it to the next person? ", dollars);
        if (c == 'y')
        {
            dollars *= 2;
        }
        else
        {
            break;
        }
    }

}

/*
If c is always == y, the result is an infinite loop.
The computer eventually run out of capacity to compute.
This particular case is known as 'Integer overflow'.

Terminal Output:
$ make calculator 
$ ./calculator 
Here's $1. Double it and give it to the next person? y
Here's $2. Double it and give it to the next person? y
Here's $4. Double it and give it to the next person? y
Here's $8. Double it and give it to the next person? y
Here's $16. Double it and give it to the next person? y
Here's $32. Double it and give it to the next person? y
Here's $64. Double it and give it to the next person? y
Here's $128. Double it and give it to the next person? y
Here's $256. Double it and give it to the next person? y
Here's $512. Double it and give it to the next person? y
Here's $1024. Double it and give it to the next person? y
Here's $2048. Double it and give it to the next person? y
Here's $4096. Double it and give it to the next person? y
Here's $8192. Double it and give it to the next person? y
Here's $16384. Double it and give it to the next person? y
Here's $32768. Double it and give it to the next person? y
Here's $65536. Double it and give it to the next person? y
Here's $131072. Double it and give it to the next person? y
Here's $262144. Double it and give it to the next person? y
Here's $524288. Double it and give it to the next person? y
Here's $1048576. Double it and give it to the next person? y
Here's $2097152. Double it and give it to the next person? y
Here's $4194304. Double it and give it to the next person? y
Here's $8388608. Double it and give it to the next person? y
Here's $16777216. Double it and give it to the next person? y
Here's $33554432. Double it and give it to the next person? y
Here's $67108864. Double it and give it to the next person? y
Here's $134217728. Double it and give it to the next person? y
Here's $268435456. Double it and give it to the next person? y
Here's $536870912. Double it and give it to the next person? y
Here's $1073741824. Double it and give it to the next person? y
Here's $-2147483648. Double it and give it to the next person? y
Here's $0. Double it and give it to the next person? y
Here's $0. Double it and give it to the next person? 
*/
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    while(true)
    {
        n = get_int("What's n? ");
        if (n >= 0)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("Neow\n");
    }
}


/*
Compress this section:
 if (n < 0)
        {
            continue;
        }
        else
        {
            break;
        }
To this:
 if (n >= 0)
        {
            break;
        }
For cleaner code (cat.c).
*/
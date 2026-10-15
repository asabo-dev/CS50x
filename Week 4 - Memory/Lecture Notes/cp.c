// Copy the contents of a csv file into another
#include <stdio.h>

typedef unsigned char BITE;

int main(int argc, char *argv[1])
{
    FILE *src = fopen(argv[1], "rb");
    FILE *dst = fopen(argv[2], "wb");

    BITE b;

    while (fread(&b, sizeof(b), 1, src) != 0)
    {
        fwrite(&b, sizeof(b), 1, dst);
    }
}


/*
Terminal Output
 $ make cp
 $ code phonebook.csv
 $ ./cp phonebook.csv copy.csv
 $
 $ code copy.c
 $ code copy.csv
 $
 * Contents of phonebook.csv were copied into copy.csv
*/

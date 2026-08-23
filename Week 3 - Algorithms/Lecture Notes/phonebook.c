// Implement linear search for a phonebook
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"ufok", "zion", "tram"};
    string numbers[] = {"+60-175-280-999", "+234-786-123-800", "+1-617-495-1000"};

    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found %s\n", numbers[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;

}

/*
Terminal Output
$ make phonebook
$ ./phonebook
Name: zion
Found +234-786-123-800
$ ./phonebook
Name: efiom
Not found
$ ./phonebook
Name: tram
Found +1-617-495-1000
$
*/

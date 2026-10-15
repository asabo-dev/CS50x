#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Open file and write to it
    // "w" overwrites whats in a file while "a" appends to it.
    FILE *file = fopen("phonebook.csv", "a");
    // Check that file exists
    if (file == NULL)
    {
        return 1;
    }

    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    fprintf(file, "%s, %s\n", name, number);
    // Save file and close it.
    fclose(file);

    return 0;
}

/*
Terminal Output
week4/ $ make phonebook
week4/ $ ./phonebook
Name: Jon
Number: 345678
week4/ $ ./phonebook
Name: Zion
Number: 1234456
*/
// Implement linear search for a phonebook
// Improve phonebook.c by creating a data structure "person"
// This process of bundling data together is called 'encapsulation'
#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
} person;

int main(void)
{
    person people[3];

    people[0].name = "Ufok";
    people[0].number = "+60-175-280-999";

    people[1].name = "Zion";
    people[1].number = "+234-786-123-800";

    people[2].name = "Tram";
    people[2].number = "+1-617-495-1000";

    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;

}

/*
Terminal Output
$ make phonebook_data_structure
$ ./phonebook_data_structure
Name: Zion
Found +234-786-123-800
$ ./phonebook_data_structure
Name: Efiom
Not found
$ ./phonebook_data_structure
Name: Ufok
Found +60-175-280-999
$ 
*/

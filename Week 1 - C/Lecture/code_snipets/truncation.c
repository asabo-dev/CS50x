#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //get numbers from user
    int x = get_int("x: ");
    int y = get_int("y: ");

    // Use type casting to convert inputs to float 
    float z = (float)x / (float)y;
    // '%f' is a placeholder for float input values ONLY
    printf("%f/n", z);

}


/*
- If the integers x and y are not converted to float type, the output will be an incorrect result.
- You can convert data from one type to another by casting the new type in brackets before the variable.
- The process is called type casting.
*/
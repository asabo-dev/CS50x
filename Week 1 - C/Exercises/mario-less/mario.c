// Prints a right-aligned pyramid
#include <cs50.h>
#include <stdio.h>

int get_height(void);
void print_row(int spaces, int bricks);

int main(void)
{
    // Pyramid's height
    int n = get_height();

    for (int i = 0; i < n; i++)
    {
        // Spaces: start with n - i and decrease each row
        // Bricks: start with 1 and increase each row
        print_row((n - i) - 1, i + 1);
    }
}

// Prompt the user for a height between 1 and 8
int get_height(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1);
    return n;
}

// Print one row of the pyramid
void print_row(int spaces, int bricks)
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
    for (int j = 0; j < bricks; j++)
    {
        printf("#");
    }
    printf("\n");
}


/*
Terminal Output
mario-less/ $ ls
mario*  mario.c
mario-less/ $ make mario
mario-less/ $ ./mario
Height: 0
Height: -4
Height: 20
                   #
                  ##
                 ###
                ####
               #####
              ######
             #######
            ########
           #########
          ##########
         ###########
        ############
       #############
      ##############
     ###############
    ################
   #################
  ##################
 ###################
####################

*/
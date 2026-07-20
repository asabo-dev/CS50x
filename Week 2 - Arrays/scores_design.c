// Use one Variable to store scores
// Use a for loop to prompt user for scores
// Use a for loop to sum up scores
#include <cs50.h>
#include <stdio.h>

float average(int length, int numbers[]);

int main(void)
{
    // Constant Variables are represented by capital letters.
    const int N = 3;
    // Initialize variable 'scores'
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Scores: ");
    }

    printf("Average: %f\n", average(N, scores));
}

float average(int length, int numbers[])
// Calculate the average score
// numbers[] represent the value of [i]
// length represent the number of iterations(N), OR length of the array
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        // Add the score after each iteration
        sum += numbers[i];
    }
    // Average score = sum/length
    // Use 'type casting' to convert length to a float to avoid truncation.
    return sum / (float) length;
}

/*

- ***When designing code, always think about the extremes;
what if you have 3000 scores instead 3, would you store each in a seperate variable?***
- ***An 'array' is a chunk(block) of continious memory back to back to back.***

Terminal Output
$ make scores_design
$ ./scores_design
Scores: 72
Scores: 73
Scores: 33
Average: 59.333332
$
*/

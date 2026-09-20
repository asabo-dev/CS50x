// This is the scarfold for plurality.c
// This program is designed to print out the winner(s) of an election
// The candidate(s) who receives the highest number of votes is the winner.
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
} candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);
int get_max_votes(candidate list[MAX], int count);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    // Iterate over each candidate
    for (int i = 0; i < candidate_count; i++)
    {
        // Check if candidate's name matches given name
        if (strcmp(candidates[i].name, name) == 0)
        // If yes, increment candidate's votes and return true
        {
            candidates[i].votes += 1;
            return true;
        }
    }
    // If no match, return false
    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    // Find the maximum number of votes
    int max_votes = get_max_votes(candidates,  candidate_count);

    // Print the candidate (or candidates) with maximum votes
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes == max_votes)
        {
            printf("%s\n", candidates[i].name);
        }
    }
    return;
}

// Get the highest number of votes overall
int get_max_votes(candidate list[MAX], int count)
{
    int max_votes = 0;
    // Loop over each candidate to determine the highest vote count
    for (int i = 0; i < count; i++)
    {
        if (list[i].votes > max_votes)
        {
            max_votes = list[i].votes;
        }
    }
    return max_votes;
}

/*
Terminal Output
plurality/ $ make pluraliti
plurality/ $ ./pluraliti
Usage: plurality [candidate ...]
plurality/ $ 


plurality/ $ make pluraliti
plurality/ $ ./pluraliti 4
Number of voters: 15
Vote: 2
Invalid vote.
Vote: 1
Invalid vote.
Vote: 15
Invalid vote.
Vote: Ufok
Invalid vote.
Vote: 1
Invalid vote.
Vote: 5
Invalid vote.
Vote: 0
Invalid vote.
Vote: candidate
Invalid vote.
Vote:


$ pwd
/workspaces/89647569
$ cd plurality
plurality/ $ make pluraliti
plurality/ $ ./pluraliti Alice Bob Mike Jon
Number of voters: 9
Vote: 2
Invalid vote.
Vote: Alice
Vote: 2
Invalid vote.
Vote: 1
Invalid vote.
Vote: Bob
Vote: Mike
Vote: Jon
Vote: Jon
Vote: Jon
Jon
plurality/ $ ./pluraliti Zion Efiom Carol
Number of voters: 10
Vote: Zion
Vote: Zion
Vote: Zion
Vote: Efiom
Vote: Efiom
Vote: Efiom
Vote: Efiom
Vote: Carol
Vote: Carol
Vote: Carol
Efiom
plurality/ $ ./pluraliti Zion Efiom Carol
Number of voters: Zion
Number of voters: Zion
Number of voters: Zion
Number of voters: 10
Vote: Zion
Vote: Zion
Vote: Zion
Vote: Zion
Vote: Efiom
Vote: Efiom
Vote: Efiom
Vote: Efiom
Vote: Tram
Invalid vote.
Vote: Carol
Zion
Efiom
plurality/ $ 
*/
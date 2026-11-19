# Abstraction with parameterization in Python
def main():
    # Define function inside main()
    for i in range(3):
        meow()


def meow():
    # Helper function
    print("meow")


# Call main() to execute program
if __name__ == "__main__":
    main()

"""
Terminal Output
$ python3 cat.py
meow
meow
meow
"""

"""
// Abstraction with parameterization in C

#include <stdio.h>

void meow(int n);

int main(void)
{
    meow(3);
}

// Meow some number of times
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}
"""
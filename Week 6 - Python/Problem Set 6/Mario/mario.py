# Print a right-aligned pyramid


def main():
    # Prompt user for height of pyramid
    while True:
        try:
            n = int(input("Height: "))
            # Ensure that input is between 1 and 8 inclusive
            if 1 <= n <= 8:
                break
        except ValueError:
            print("Enter a number ranging from 1 to 8")

    for i in range(n):
        # Spaces: start with n - i and decrease each row
        # Bricks: start with 1 and increase each row
        print_row((n - i) - 1, i + 1)


def print_row(spaces, bricks):
    # Print one row of the pyramid
    for _ in range(spaces):
        print(" ", end="")

    for _ in range(bricks):
        print("#", end="")

    print()


if __name__ == "__main__":
    main()


"""
Terminal Output
Mario $ python3 mario.py
Height: foo
Enter a number ranging from 1 to 8
Height: 0
Height: -1
Height: 2
 #
##
Mario $ python3 mario.py
Height: 9
Height: 90
Height: ccc
Enter a number ranging from 1 to 8
Height: 7
      #
     ##
    ###
   ####
  #####
 ######
#######
"""
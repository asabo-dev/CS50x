# Prints out the minimum number of coins for change AAAAA

def main():

    # Prompt the user for change owed, in dollars
    while True:
        # try/except block inside while loop ensures that user is reprompted
        try:
            dollars = float(input("Change owed: "))
            if dollars >= 0:
                break
        except ValueError:
            print("Enter a valid amount")

    # Convert dollars to cents
    cents = round(dollars * 100)


    quarters = calculate_quarters(cents)
    # Subtract the value of quarters from cents
    cents = cents - (quarters * 25)

    dimes = calculate_dimes(cents)
    # Subtract the value of dimes from remaining cents
    cents = cents - (dimes * 10)

    nickels = calculate_nickels(cents)
    # Subtract the value of nickels from remaining cents
    cents = cents - (nickels * 5)

    pennies = calculate_pennies(cents)

    # Sum the number of quarters, dimes, nickels, and pennies used
    coins = quarters + dimes + nickels + pennies
    # Print that sum
    print(coins)


def calculate_quarters(cents):
    # Calculate how many quarters you should give customer

    quarters = 0

    while cents >= 25:
        quarters += 1
        cents -= 25

    return quarters


def calculate_dimes(cents):
    # Calculate how many dimes you should give customer

    dimes = 0

    while cents >= 10:
        dimes += 1
        cents -= 10
    
    return dimes


def calculate_nickels(cents):
    # Calculate how many nickels you should give customer

    nickels = 0

    while cents >= 5:
        nickels += 1
        cents -= 5
    
    return nickels


def calculate_pennies(cents):
    # Calculate how many pennies you should give customer

    pennies = 0

    while cents >= 1:
        pennies += 1
        cents -= 1
    
    return pennies


if __name__ == "__main__":
    main()

# Print the reading grade level for a text input

def main():
    # Prompt the user for some text
    while True:
        text = input("Text: ")
        # Input validation
        # Accept text containing letters, numbers and spaces
        if text.strip() and text.isalnum():
            break

    print("Type in valid alphanumeric text.")

    # Count the number of letters, words, and sentences in the text
    letters = count_letters(text)
    words = count_words(text)
    sentences = count_sentences(text)

    # Calculate the average number of letters per 100 words in the text
    L = (letters / words) * 100

    # Calculate the average number of sentences per 100 words in the text
    S = (sentences / words) * 100

    # Compute the Coleman-Liau index
    index = round(0.0588 * L - 0.296 * S - 15.8)

    # Print the grade level
    if index >= 16:
        print("Grade 16+")
    elif index < 1:
        print("Before Grade 1")
    else:
        print(f"Grade {index}")
    

def count_letters(text):
    """Return the number of letters in text"""

    letters = 0
    for i in range(len(text)):
        if text[i].isalpha():
            letters += 1

    return letters


def count_words(text):
    """
    Return the number of words in text.
    Use split() method to get individual strings in text.
    """

    words = len(text.split())
    return words


def count_sentences(text):
    """Return the number of sentences in text"""

    sentences = 0
    for i in range(len(text)):
        if text[i] == "." or text[i] == "!" or text[i] == "?":
            sentences += 1

    return sentences


if __name__ == "__main__":
    main()
# Python implementation of Problem Set 5 (Speller)


words = set() 
#set can store a bunch of words without duplicates
# set() is similar to the hash table implemented in C


def check(words):
    word = ""
    return word.lower() in words 
    # Essentially a boolean expression to check if
    # given word is in the set().


def load(dictionary):
    with open(dictionary) as file:
        words.update(file.read().splitlines())
    return True


def size():
    return len(words)


def unload():
    return True


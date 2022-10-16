"""
steps:
1. input/listen
2. process/decide
3. output/talkback

"""

import pyjokes


def tell_some_jokes():
    while True:
        inp = input("Enter 1 to tell a joke/press any key to quit: ")
        if inp != "1":
            break
        print(pyjokes.get_joke())


tell_some_jokes()

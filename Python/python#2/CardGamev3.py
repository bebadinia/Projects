# Python Lab 2 Card Game Problem Version 3 by Ben Ebadinia

import random

# Define the deck of cards
deck = ["two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "jack", "queen", "king", "ace"] * 4

# Shuffle the deck
random.shuffle(deck)

# Define the high cards
high_cards = ["jack", "queen", "king", "ace"]

# Initialize the score for each player
score_a = 0
score_b = 0

# Start the game
for i, card in enumerate(deck):
    if i % 2 == 0:
        # Player A's turn
        if card in high_cards:
            if card == "ace" and len(deck[i+1:i+5]) >= 4:
                if all(c not in high_cards for c in deck[i+1:i+5]):
                    score_a += 4
                    print("Player A scores 4 point(s).")
            elif card == "king" and len(deck[i+1:i+4]) >= 3:
                if all(c not in high_cards for c in deck[i+1:i+4]):
                    score_a += 3
                    print("Player A scores 3 point(s).")
            elif card == "queen" and len(deck[i+1:i+3]) >= 2:
                if all(c not in high_cards for c in deck[i+1:i+3]):
                    score_a += 2
                    print("Player A scores 2 point(s).")
            elif card == "jack" and len(deck[i+1:i+2]) >= 1:
                if deck[i+1] not in high_cards:
                    score_a += 1
                    print("Player A scores 1 point(s).")
    else:
        # Player B's turn
        if card in high_cards:
            if card == "ace" and len(deck[i+1:i+5]) >= 4:
                if all(c not in high_cards for c in deck[i+1:i+5]):
                    score_b += 4
                    print("Player B scores 4 point(s).")
            elif card == "king" and len(deck[i+1:i+4]) >= 3:
                if all(c not in high_cards for c in deck[i+1:i+4]):
                    score_b += 3
                    print("Player B scores 3 point(s).")
            elif card == "queen" and len(deck[i+1:i+3]) >= 2:
                if all(c not in high_cards for c in deck[i+1:i+3]):
                    score_b += 2
                    print("Player B scores 2 point(s).")
            elif card == "jack" and len(deck[i+1:i+2]) >= 1:
                if deck[i+1] not in high_cards:
                    score_b += 1
                    print("Player A scores 1 point(s).")

# Print the final score
print("Player A: {} point(s).".format(score_a))
print("Player B: {} point(s).".format(score_b))


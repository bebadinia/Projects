# Python Lab 1 by Ben Ebadinia

import string

fhand = open('Hamlet.txt') # Opening File
counter = dict() # Creating a dictionary called counter

for line in fhand: # For-Loop that increments as long as it is not the EOF
    line = line.translate(str.maketrans('', '', string.punctuation)) # Changing the punctuation to an empty space
    line = line.lower() # Make line lower-case
    words = line.split() # Split the words by space
    
    for word in words: 
        if word not in counter: # Looking through Dictionary
            counter[word] = 1 # If word is not in the Dictionary then create add the word and give it a value of 1
        else:
            counter[word] += 1 # If word is already in dictionary then increment the value by +1

lst = list() # Sort the dictionary by value
for key, val in list(counter.items()):
    lst.append((val, key))

lst.sort(reverse=True)

for key, val in lst[:10]:
    print(key, val)
    
fhand.close() # Closing File

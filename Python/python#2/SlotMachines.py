# Python Lab 2 Slot Machines Problem by Ben Ebadinia

quarters = int(input()) # Get number of quarters in jar from user

if (quarters < 1000) and (quarters >= 1): # Checking bounds
    first = int(input()) # Get number times machine 1 was played from user
    second = int(input()) # Get number times machine 2 was played from user
    third = int(input()) # Get number times machine 1 was played from user
    counter = 0 # Setting number of times played

    while (quarters != 0): # Loop to keep going until broke
        # For first game
        quarters -= 1 
        first += 1 
        if (first == 35): # If number of times played is 35, increase quarters by 30 and reset game 1 counter
            quarters += 30
            first = 0
        counter += 1
        
        if (quarters == 0):
            break
        
        # For second game
        quarters -= 1 
        second += 1 
        if (second == 100): # If number of times played is 100, increase quarters by 60 and reset game 2 counter
            quarters += 60
            second = 0
        counter += 1
        
        if (quarters == 0):
            break
        
        # For third game
        quarters -= 1 
        third += 1 
        if (third == 10): # If number of times played is 10, increase quarters by 9 and reset game 3 counter
            quarters += 9
            third = 0
        counter += 1
        
    print('Martha plays ' + str(counter) + ' times before going broke.')

else:
    print("Number of times is not at least 1 or less than 1000")
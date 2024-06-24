# Python Lab 1 (Extra Credit - Running up Stairs) by Ben Ebadinia

List = []
numOfTimes = int(input())

if (numOfTimes <= 5) and (numOfTimes >= 1):
    for x in range (0, numOfTimes):
        numOfSteps = int(input())
        if (numOfSteps <= 22000) and (numOfSteps >= 1):
            List.append(numOfSteps)
        else:
            print("Number of steps is not between or equal to 1 and 22000")
else:
    print("Number of times is not between or equal to 1 and 5")

print()

for x in range (0, len(List)):
    num1 = 0
    num2 = 1
    next_num = num2
    counter = 1
    
    while (counter < List[x]):
        counter += 1
        num1, num2 = num2, next_num
        next_num = num1 + num2
    
    print(next_num)


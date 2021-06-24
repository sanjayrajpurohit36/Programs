# June Circuits 2021
# Problem Statement
# It's 12 o'clock at midnight (00:00) and Simon cannot sleep! So he decided to stare at the clock on his wall until he falls asleep.
# He saw the clock's hands and got to thinking 'How many times they'll pass 
# each other until I fall asleep'. Imagine that he fell asleep at hh:mm. Now,
# you must  figure out how  many times clock's hands overlap from 00:00 to hh:mm 
# (including 00:00 and hh:mm). 

def calcOverlap(time):
    overlapCount = 0
    hour = int(time.split(":")[0])
    min = int(time.split(":")[1])
    if hour >= 12:
        overlapCount += 11 
        hour = hour - 12
    
    if hour >= 11:
        overlapCount += 11
    else: 
        if hour > 0:
            overlapCount += hour
        if (min >= (hour * 5) * (12/11)):
            overlapCount += 1
    print(overlapCount)


T = int(input())
while(T):
    time = input()
    calcOverlap(time)
    T-=1
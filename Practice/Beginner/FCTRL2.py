import sys
nl = input()
while (nl > 0):
    number = input()
    facto = 1
    for x in range(1,number+1):
        facto *= x   
    print facto
    nl-=1 
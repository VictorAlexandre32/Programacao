side = []
for c in range(1,4):
    s = float(input(f'Enter the #{c} value: '))
    side.append(s)

if (pow(side[1],2) + pow(side[2],2)) == pow(side[0],2) or (pow(side[0],2) + pow(side[2],2)) == pow(side[1],2) or (pow(side[0],2) + pow(side[1],2)) == pow(side[2],2):
    print("This is a rectangle triangle")
else: print("This is not a rectangle triangle")

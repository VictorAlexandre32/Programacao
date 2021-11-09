side = []
for c in range(1,4):
    s = float(input(f'Enter the #{c} side value: '))
    side.append(s)

if (side[0] + side[1]) > side[2] and (side[0] + side[2]) > side[1] and (side[1] + side[2]) > side[0]:
    if  side[0] == side[1] and side[0] == side[2]: print("Equilateral triangle")

    elif side[0] != side[1] and side[0 != side[2]]: print("Scalene triangle")
    
    else: print("Isosceles triangle")

else: print("This is not a triangle")

values = []
greatest = 0
for c in range(1, 4):
    v = float(input(f'Enter the #{c} value: '))
    values.append(v)

if values[0] > values[1 and values[0] > values[2]]: greatest = values[0]

elif values[1] > values[2]: greatest = values[1]

else: greatest = values[2]

print(f"The greatest value is {greatest}")

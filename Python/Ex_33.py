values = []

for c in range(1, 11):
    v = float(input(f'Enter the #{c} value: '))
    values.append(v)

for c in range(9, -1, -1):
    print(values[c])

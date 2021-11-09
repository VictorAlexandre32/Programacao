values = []

for c in range(1, 3):
    v = float(input(f'Enter the #{c} value: '))
    values.append(v)

while values[1] < values[0]:
    values[1] = float(input("Enter the second value again (must be greater than the first): "))

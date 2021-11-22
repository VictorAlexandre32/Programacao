values = []

for c in range(0, 20):
    v = float(input("Enter with a value: "))
    values.append(v)

multiplier = float(input('Enter with a multiplier: '))

for i in range(0, 20):
    values[i] *= multiplier

for value in values:
    print(value)
 
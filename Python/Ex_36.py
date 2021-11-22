values = []
values2 = []

for c in range(0, 20):
    v = float(input("Enter with a value: "))
    values.append(v)

multiplier = float(input('Enter with a multiplier: '))

for i in range(0, 20):
    multiple = values[i] * multiplier
    values2.append(multiple)

for value in values:
    print(value)
    
for value in values2:
    print(value)
 
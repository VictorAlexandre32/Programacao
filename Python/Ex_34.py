values = []

for c in range(0, 10):
    v = float(input("Enter with a value: "))
    values.append(v)

for i in range(1, 10):
    if values[0] < values[i]:
        values[0] = values[i]

greater = values[0]
print(f"The greatest number is: {greater}")

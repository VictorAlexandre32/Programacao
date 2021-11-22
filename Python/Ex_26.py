v1 = int(input('Type a value: '))

while v1 < 0:
    v1 = int(input('Type a value again. Only positive values: '))

print(f"Printing number {v1} times table...")

for c in range (1, 11):
    print(f"{c} x {v1} = {c * v1}")

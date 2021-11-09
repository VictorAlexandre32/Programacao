average = 0.0
for c in range(1,5):
    score = float(input(f'Enter the #{c} note: '))
    average += score

average /= 4

print(f"The average is {average}")

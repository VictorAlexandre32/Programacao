score = []

for c in range(1, 3):
    s = float(input(f'Enter the P{c} score: '))
    score.append(s)

average = (score[0] + 2 * score[1]) / 3

if average >= 5.0: print("Approved!")

else: print("Disapproved")

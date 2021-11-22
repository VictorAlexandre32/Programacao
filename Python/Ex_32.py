t1 = 2
serie = 3
n = int(input('Type a postive value lower than 100: '))

while n < 0 and n > 100:
    print("Error!")
    n = int(input('Type a postive value lower than 100 again: '))

for c in range(0, n):
    print(f"{t1} - ", end='')
    t1 += serie
    serie += 2

t1 = 1
t2 = 1
t3 = 1
print(f"{t1} - {t2} - {t3}", end='')
for c in range(1, 18):
    t4 = t1 + t2 + t3
    print(f" - {t4}", end='')
    t1 = t2
    t2 = t3
    t3 = t4

value1 = float(input('Enter a value: '))
value2 = float(input('Enter a different value: '))

if value1 != value2:
    if value1 > value2:print(f"The greatest value is {value1}")
    else: print(f"The greatest value is {value2}")
else:
    print(f"The numbers are the same")

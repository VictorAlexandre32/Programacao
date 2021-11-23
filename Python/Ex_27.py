number = float(input("Enter the value you want to calculate the times table: "))

while(number <= 0):
    print("Only accpet positive numbers!")
    number = int(input("Enter the value you want to calculate the times table: "))

lower = float(input("Type the lower limit: "))
higher = float(input("Type the higher limit: "))

while(higher < lower):
    print("Invalid value")
    higher = float(input("Type a value higher than the lower limit: "))

while(lower <= higher):
    print(f'{number} X {higher} = {number * higher}')
    higher -=  1

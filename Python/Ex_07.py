price = 0.0
for c in range(1,6):
    value = float(input(f'Enter the value of the product #{c}: '))
    price += value

print(f"The total is R${price:.2F}")
payment = float(input('Payment: '))
change = payment - price

print(f"The change is {change:.2F}")
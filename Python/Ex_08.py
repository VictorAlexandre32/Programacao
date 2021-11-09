weight = float(input('Enter your weight in (kg): '))
height = float(input('Enter your height in (m): '))

imc = weight / pow(height,2)

print(f"Your IMC is {imc:.2F}")
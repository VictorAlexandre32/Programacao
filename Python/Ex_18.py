weight = float(input('Enter your weight in (kg): '))
height = float(input('Enter your height in (m): '))
sex = input('Enter your sex (f/m): ').upper()

imc = weight / pow(height,2)

if sex == "F":
    if imc >= 19 and imc < 24: print("Ideal weight")
    else: print("This is not an ideal weight")
if sex == "M":
    if imc >= 20 and imc < 25: print("Ideal weight")
    else: print("This is not an ideal weight")

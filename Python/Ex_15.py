weight = float(input('Enter your weight in (kg): '))
height = float(input('Enter your height in (m): '))

imc = weight / pow(height,2) 

if imc >= 20 and imc < 25: print("Ideal weight")
else: print("This is not an ideal weight")

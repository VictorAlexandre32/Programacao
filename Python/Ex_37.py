values = []
max = int(input('How many values do you want to type? (max of 20): '))

while max > 20:
    max= int(input('Error! The typed value is out of range.\n Please enter the amount again: '))

for c in range(0, max):
    v = float(input("Enter with a value: "))
    values.append(v)

answer = "Y"

while answer != "N":

    search = int(input('Enter with the value you want to search for: '))

    if search in values:
        position = values.index(search)
        print(f"The position is {position}")
    else: 
        print("Value not found!")
    while search not in values:
        answer = input('Do you want to make another search? (y/n): ').upper()
        if answer == "Y":
            search = int(input('Enter with the value you want to search for: '))
    answer = input('Do you want to make another search? (y/n): ').upper()

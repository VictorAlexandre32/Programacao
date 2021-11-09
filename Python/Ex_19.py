v0 = float(input('Enter the initial speed in (m/s): '))
a = float(input('Enter the acceleration in (m/s²): '))
t = float(input('Enter the route time in (s): '))

v = v0 + (a * t)

if v <= 40: print("Vehicle is too slow")
elif v > 40 and v <= 60: print("Allowed speed")
elif v > 60 and v <= 80: print("Cruise speed")
elif v > 80 and v <= 120: print("Fast vehicle")
else: print("Vehicle is too fast")

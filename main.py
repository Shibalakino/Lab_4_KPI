import math


def func(x):
    return float(x + 2) / (-2 * pow(x, 2) + 3 * x + 6)


counter = 1
interal = float
start = 0.0
end = 2
stepInteg = 0.000001
numberOfInteg = (end - start) / stepInteg
Integral = stepInteg * (func(start) + func(end)) / 2
for counter in range(1, int(numberOfInteg) - 1):
    counter += 1
    Integral = Integral + stepInteg * func(start + stepInteg * counter)
Integral = round(Integral, 6)
print("Your square = ", Integral)

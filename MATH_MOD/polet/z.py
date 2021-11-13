import math
import matplotlib.pyplot as plt


y = []
x = []
t1 = []

g = 9.8

alpha = 45
v0 = 1000

t = 2 * v0 * math.sin(alpha)/g
step = 1

while t >= 0:
    x.append(v0*math.cos(alpha)*t)
    y.append(((-g*t*t/2) + (v0 * math.sin(alpha)*t))/1.4)
    t1.append(t)
    t-=step
    


fig = plt.figure()   # Создание объекта Figure
plt.plot(x, x)


plt.plot(x, y)
plt.grid(True)


plt.show()


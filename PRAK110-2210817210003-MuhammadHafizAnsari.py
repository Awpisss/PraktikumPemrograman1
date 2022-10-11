import math
a=5
t=12
A=a
B=math.sqrt(a*a+t*t)
C=t
k=A+B+C
l=A*C/2

print("Diketahui :")
print("Alas =",a, "cm")
print("Tinggi =",t, "cm")
print("\nJawab :")
print("Sisi A =",C, "cm")
print("Sisi B = ",end="")
print("%.0f" % B, "cm")
print("Sisi C =",A, "cm")
print("Keliling = ",end="")
print("%.0f" % k, "cm")
print("Luas = ",end="")
print("%.0f" % l, "cm")
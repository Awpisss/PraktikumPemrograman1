import math
A=int(input('Masukkan nilai A: '))
B=int(input('Masukkan nilai B: '))
C=math.sqrt((B*B)-(A*A))
print('\nAlas= ',end='')
print('%d' %C, 'cm')
print('Tinggi=',A,'cm')
K=A+B+C
print('Keliling= ',end='')
print('%d' %K, 'cm')
L=0.5*C*A
print('Luas= ',end='')
print('%d' %L, 'cm^2')

a = 400000
b = 350000
adiskon=a-(0.13*a)
bdiskon=b-(0.21*b)

print("Harga sepatu A adalah",a)
print("Harga sepatu B adalah",b)
print("Sepatu A mendapat diskon 13% sehingga harganya menjadi ",end="")
print("%.0f" % adiskon)
print("Sepatu b mendapat diskon 21% sehingga harganya menjadi ",end="")
print("%.0f" % bdiskon)
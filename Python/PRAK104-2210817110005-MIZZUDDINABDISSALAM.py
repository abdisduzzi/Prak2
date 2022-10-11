sepA = int(input("Harga sepatu A adalah    :"))
sepB = int(input("Harga sepatu B adalah    :"))
d1 = 0.13
h1 = sepA - (sepA * d1)
d2 = 0.21
h2 = sepB - (sepB * d2)

print("Sepatu A mendapat diskon 13% sehingga harganya menjadi ", round(h1))
print("Sepatu B mendapat diskon 21% sehingga harganya menjadi ", round(h2))
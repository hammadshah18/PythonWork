n=int(input("enter your Number"))
pro=1

while n>0:
    pro=pro*(n%10)
    n=n//10
print("product of a digit is :",pro)    
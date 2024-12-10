n=int(input("enter your Number"))
n=abs(n)
smallestdigit=9
while n>0:
    digit=n%10
    if digit<smallestdigit:
        smallestdigit=digit
    n=n//10
print("print smallest Number : ",smallestdigit)        
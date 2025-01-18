n=int(input("enter your number"))
rev=0
orig=n
while n>0:
    rev=(rev*10)+n%10
    n=n//10
print(rev)    
if rev==orig:
    print("palindrome")
else:
    print("Not Palindrome")    
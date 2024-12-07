# sum of sequence 
sum=0
fact=1
n=int(input("enter your Number"))
for i in range(1,n+1):
    fact=fact*i
    sum=sum+i/fact
print(sum)    
n=int(input("enter your Number : "))
i=n
count=0
while i>0:
    i=i//10
    count=count+1
sum=0
i=n
while i>0:
    digit=i%10
    x=1
    pro=1
    while x<=count:
        pro=pro*digit
        x=x+1
    sum=sum+pro
    i=i//10
if sum==n:
    print("Armstrong Number : ",sum)  
else:
    print("Not Armstrong Number : ",sum) 

rev=0
orig=n
while n>0:
    rev=(rev*10)+n%10
    n=n//10
if rev==orig:
    print("palindrome =",rev)
else:
    print("Not Palindrome =",rev)   



    
              
                  

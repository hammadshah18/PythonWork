# n=int(input("enter your last NUmber : "))
# i=0
# sum=0
# while i<=n:
#     sum=sum+i
#     i=i+2

# print("sum =",sum) 
n=int(input("enter how many number you want to add : "))
i=1
sum=0
count=0
while count<n:
    if i%2==0:
     sum=sum+i
     count=count+1
    i=i+1
print("sum =",sum)       
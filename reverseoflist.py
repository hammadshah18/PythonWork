a=[]
size=int(input("Enter your size : "))
for i in range(size):
    b=int(input("enter your Number in list : "))
    a.append(b)
print(a)    
i=0
j=size-1
while i<j:
    t=a[i]
    a[i]=a[j]
    a[j]=t
    i=i+1
    j=j-1
print("Your reverse List is = :",a)    
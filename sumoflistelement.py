a=[]
size=int(input("enter the size of list"))
for i in range(size):
    val=int(input("enter the values :"))
    a.append(val)
sum=0    
for i in range(size):
    sum=sum+a[i]
print(a)    

a=[]
size=int(input("enter your size of list :"))
for i in range(size):
    b=int(input("enter your element in a list :"))
    a.append(b)
print(a)    
key=int(input("Enter your Number in list"))

flag=0
for i in range(size):
        if a[i]==key:
            pos=i
            flag=+1
            break
if flag==0:
    print("element not found")
else:
    for i in range(pos,size-1):
        a[i]=a[i+1] 
    a.pop()
    print("list after deletion",a)

    

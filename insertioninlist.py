a=[]
size=int(input("enter your size of list :"))
for i in range(size):
    b=int(input("enter your element in a list :"))
    a.append(b)
print(a)    
key=int(input("Enter your Number in list"))
pos=int(input("enter your pos"))
a.append(None)
for i in range(size-1,pos-2,-1):
    a[i+1]=a[i]
a[pos-1]=key
print("your list after modification is :",a)    
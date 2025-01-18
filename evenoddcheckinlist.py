a=[]
size=int(input("enter the size of list :"))
for i in range(size):
    x=int(input("Enter your Number in list"))
    a.append(x)
odd=0
even=0
for i in range(size):
    if a[i]%2==0:
        even=even+1
    else:
        odd=odd+1
print("even =",even)  
print("odd",odd)          
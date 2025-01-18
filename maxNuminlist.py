a=[]
size=int(input("Enter Your size : "))
for i in range(size):
    b=int(input("Enter your Number in List"))
    a.append(b)
print(a)    
max=0
for i in range(size):
    if a[i]>max:
        max=a[i]
    else:
        max=max
print("max number in giving list =",max)        

        
    
        
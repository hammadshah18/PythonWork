a=[]
size=int(input("Enter Your size : "))
for i in range(size):
    b=int(input("Enter your Number in List"))
    a.append(b)
print(a)    
min=9
for i in range(size):
    if a[i]<min:
        min=a[i]
    else:
        min=min
print("max number in giving list =",min)        

n=int(input("Enter your Number : ")) 
i=1
while i<=n:
    j=1
    while j<=n:
        print("*",end=' ') 
        j=j+1
    i=i+1   
    print()
n=int(input("Enter your Number : ")) 
i=1
while i<=n:
    j=1
    while j<=n-i:
        print(" ",end=' ') 
        j=j+1
       
    k=1
    while k<=i:
        print("*",end=' ')
        k=k+1
    i=i+1
    print()    
n=int(input("Enter your Number : ")) 
i=1
while i<=n:
    j=1
    while j<=n-i:
        print(" ",end=' ') 
        j=j+1
       
    k=1
    while k<=i:
        print(i,end=' ')
        k=k+1
    i=i+1
    print()      
n=int(input("Enter your Number : ")) 
i=1
while i<=n:
    j=1
    while j<=n-i:
        print(" ",end=' ') 
        j=j+1
       
    k=1
    while k<=i:
        print(k,end=' ')
        k=k+1
    i=i+1
    print()  
# n=int(input("enter your digit"))
# if n==1:
#     print("its not prime Number")
# if n>1:    
#     for i in range(2,n):
#         if n%i==0:
#             print("its not a prime Number")
#             break
#     else:
#         print("it is a prime number")    

lower=int(input("enter your starting range"))    
upper=int(input("enter your ending range"))
for i in range(lower,upper+1):
    for j in range(2,i):
        if i%j==0:
            break
    else:
        print(i)    

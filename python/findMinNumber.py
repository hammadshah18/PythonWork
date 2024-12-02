a=int(input("enter your first number "))
b=int(input("enter your second number"))
c=int(input("enter your third number"))
if a>b and a<c:
    print("b is Min number")
elif b>a and b<c:
    print("A is Min number")
elif a==b and b==c:
    print("all are equal number") 
elif a==b and a<c and b<c:
    print("a and b are Min number")   
elif a==c and a<b and c<b:
    print("a and c are Min number")   
elif b==c and b<a and c<a:
    print("b and c are Min number")
elif a==b and a>c and b>c:
    print("c  are Min number")   
elif a==c and a>b and c>b:
    print("b  are Min number")   
elif b==c and b>a and c>a:
    print("a Min number")

else:
    print("c is Min number")
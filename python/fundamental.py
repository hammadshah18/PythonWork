print("hello")
print("hammd",1,2,3,sep='/')
print("hello",end='-' )
print("Hammad")
# dynamic binding blow
a=5
print(a)
a="shah"
print(a)
# here end dynamic binding exmaple means we can use one variable multiple times
# varibale creation method
a,b,c=1,2,3
print(a,b,c)
a=b=c=3
print(a,b,c)
input("your Name :")
# taking user input from here
a=input("enter you number :")
b=input("enter your second number :")
print(type(a),type(b)) #this type keyword tells us about data type of value

c= int(a)+int(b) #this is type casting we converted string data type into int data type
print(c)
print(type(a))# data will be same as old 
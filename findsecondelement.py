# a=[]
# size=int(input("enter your size :"))
# for i in range(size):
#     b=int(input("enter your elements in list :"))
#     a.append(b)
# print(a)
# max=0
# for i in range(size):
#     if a[i]>max:
#         max=a[i]
# print(max)  
# maximum=max        
# a.remove(max) 
# for i in range(size):
#     if a[i]>max:
#         max=a[i]
# print(max)      
# Input list
a = []
size = int(input("Enter the size of the list: "))
for i in range(size):
    b = int(input("Enter an element: "))
    a.append(b)
max = 0
for i in range( size):
    if a[i] > max:
        max = a[i]
smax = 0  
for i in range(size):
    if a[i] != max:
        if smax == 0 or a[i] > smax:
            smax = a[i]
if smax == 0:
    print("There is no second maximum (all elements are the same or the list only contains the number 0).")
else:
    print("The second maximum number is:", smax)
    
        

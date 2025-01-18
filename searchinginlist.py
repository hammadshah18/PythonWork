# a=[]
# size=int(input("enter your size : "))
# for i in range(size):
#     b=int(input("enter your element in a given list"))
#     a.append(b)
# print("List : ",a)
# key=int(input("enter your element to search : "))
# flag=0
# pos=0
# for i in range(size):
#     if a[i]==key:
#         flag=flag+1
#         pos=i+1
#         break
# if flag==1:
#     print("element Found at",pos)
# else:
#     print("element is not found ")  
a = []
size = int(input("Enter your size: "))
for i in range(size):
    b = int(input("Enter an element: "))
    a.append(b)
print("List:", a)

key = int(input("Enter the element to search: "))
for i in range(size):
    if a[i] == key:
        print("Element found at position", i + 1)
        break
else:
    print("Element not found")

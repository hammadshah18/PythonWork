# class user:
#     def __init__(self):
#         self.name='hammad'

#     def login(self):
#         print('login')  

# class student(user):
#     # def __init__(self): ___****___ always create chil constructor first
#     #     self.rollno=36

#     def enroll(self):
#         print('hammad enrolled in last batched')             

# u1=user()    
# s1=student()  
# s1.enroll()
# s1.login()
# print(s1.name)

# class phone:
#     def __init__(self,price,brand,camera):
#         print("inside phone constructor:")
#         self.__price=price  #private 
#         self.brand=brand
#         self.camera=camera

#     # def buy(self):
#     #     print("buy a phone : ")

#     def check(self):
#         print(self.__price )   
# class smartphone(phone):
#     # def __init__(self,os,ram):
#     #     print('inside smartphone constructor :')
#     #     self.os=os
#     #     self.ram=ram

#     def show(self):
#         print(self.check())    # accessing private attribute using getter setter method
       

# # p=phone(100,'samsung',32)
# s=smartphone(100,'samsung',32)
# # print(s.brand,s.camera)
# # s.buy()
# s.show()
# class phone:
#     def __init__(self,price,brand,camera):
#         print("inside phone constructor:")
#         self.price=price  
#         self.brand=brand
#         self.camera=camera

#     def buy(self):
#         print("buy a phone : ")

       
# class smartphone(phone):
  

#     def buy(self):
#         print('buyig a smart phone : ')  

#         super().buy() # super keyword will call parent method first
       

# s=smartphone(100,'samsung',32)

# s.buy()
#_***********_________ multilevel inheritance exmaple below_____*******
# class product:
#     def review(self):
#         print('customer review : ')

# class phone(product):
#     def __init__(self,price,brand,camera):
#         print("inside phone constructor:")
#         self.price=price  
#         self.brand=brand
#         self.camera=camera

#     def buy(self):
#         print("buy a phone : ")
# class smartphone(phone):
  

#     def buy(self):
#         print('buyig a smart phone : ')  

#         super().buy() # super keyword will call parent method first
       

# s=smartphone(100,'samsung',32)

# s.buy()
# s.review()
#************ hierarichal inheritance example*****************
# class phone:
#     def __init__(self,price,brand,camera):
#         print("inside phone constructor:")
#         self.price=price  
#         self.brand=brand
#         self.camera=camera

#     def buy(self):
#         print("buy a phone : ")
# class smartphone(phone):
#     pass
# class feature(phone):
#     pass
# s=smartphone(100,'samsung',32)
# f=feature(300,'vivo',10)
# f.buy()
# print(s.brand)
#************ multilevel inheritance example **************
class product:
    def review(self):
        print('customer review : ')

    def buy(self):
        print("buy a product : ")    
class phone:
    def __init__(self,price,brand,camera):
        print("inside phone constructor:")
        self.price=price  
        self.brand=brand
        self.camera=camera

    def buy(self):
        print("buy a phone : ")
class smartphone(product,phone):
    pass
  
      
    # def buy(self):
    #     print('buyig a smart phone : ')  

        # super().buy() # super keyword will call parent method first
       

s=smartphone(100,'samsung',32)

s.buy()
s.review()
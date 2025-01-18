class Atm:
    





    #constructor
    def __init__(self):
        print(id(self))
        self.pin=''
        self.balance=0
        print("hello world")  
        # self.menu()
    def menu(self):
        user_input= input("""
          1. press 1 to create pin 
          2 press 2 change pin      
          3 press 3 check balance      
          4 press 4 to withdraw 
          5 anythin else to exit :  """) 
        if user_input=='1':
            #createpin
            self.create_pin()
        elif user_input=='2': 
            #change pin  
             self.change_pin()
        elif user_input=='3':
            #check balance
            self.check_balance()
            pass
        elif user_input=='4':
             self.Money_withdraw()  
             pass 
        else:    
          exit()
    def create_pin(self):  
        user_pin=int(input("Create your pin"))  
        self.pin=user_pin

        user_balance=int(input("enter your balance"))
        self.balance=user_balance

        print("pin create succesfully")
        self.menu()

    def change_pin(self):
        old_pin=int(input("enter your old pin")) 
        if old_pin==self.pin : 
             new_pin=int(input("change your pin :")) 
        else:
            print("wrong old pin")  

        self.pin=new_pin 
        print("pin change successfully")
        self.menu() 

    def check_balance(self):
        your_pin=int(input("Enter your pin "))   
        if your_pin==  self.pin:
            print("your balance = ",self.balance)

        self.menu()

    def Money_withdraw(self):
        withM=int(input("how much you want to withdraw"))   
        if withM<=self.balance:
            self.balance= self.balance-withM
            print("withdraw succesfully!","now",self.balance,"is remaining in your account")
        else:
            print("you have insufficient balance :")    


        self.menu()



obj=Atm()
print(id(obj))

print(type(obj) )        



class Fraction:
    def __init__(self,x,y):
        self.num=x
        self.dem=y
       
    def __str__(self):
        return '{}/{}'.format(self.num,self.dem)

    def __add__(self,other):
        new_num=self.num*other.dem + other.num*self.dem
        new_dem=self.dem*other.dem
        return '{}/{}'.format(new_num,new_dem)

    def __sub__(self,other):
        new_num=self.num*other.dem - other.num*self.dem
        new_dem=self.dem*other.dem
        return '{}/{}'.format(new_num,new_dem)    
    def __mul__(self,other):
        new_num=self.num*other.num
        new_dem=self.dem*other.dem
        return '{}/{}'.format(new_num,new_dem)    

    def __truediv__(self,other):
        new_num=self.num*other.dem
        new_dem=self.dem*other.num
        return '{}/{}'.format(new_num,new_dem)  

    def convert_to_dec(self):
        return self.num/self.dem


fr1=Fraction(3,4)
print(fr1) 
fr2=Fraction(1,2)
fr1.convert_to_dec()
print(fr2)    
print(fr1+fr2)
print(fr1-fr2)  
print(fr1*fr2)  
print(fr1/fr2)  
        
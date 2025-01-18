class Atm:
    def __init__(self):
        print(id(self))
        self.pin=''
        self.__balance=0
        print("hello world")  
        self.__menu()
    
    def get_balance(self):
        return self.__balance
    def set_balance(self,new_balance):

        if new_balance==int:
            self.get_balance=new_balance
        else:
            print("change only integer")
         
    def __menu(self):
        user_input= input("""
          1. press 1 to create pin 
          2 press 2 change pin      
          3 press 3 check balance      
          4 press 4 to withdraw 
          5 anythin else to exit :  """) 
        if user_input=='1':
            self.create_pin()
        elif user_input=='2': 
         
            self.change_pin()
        elif user_input=='3':
            
            self.check_balance()
            
        elif user_input=='4':
            self.Money_withdraw()  
              
        else:    
          exit()
    def create_pin(self):  
        user_pin=int(input("Create your pin"))  
        self.pin=user_pin

        user_balance=int(input("enter your balance"))
        self.__balance=user_balance

        print("pin create succesfully")
        self.__menu()

    def change_pin(self):
        old_pin=int(input("enter your old pin")) 
        if old_pin==self.pin : 
            new_pin=int(input("change your pin :")) 
            if  new_pin==old_pin:
                new_pin=int(input("enter your new pin this pin is already exist") )    
        else:
            print("wrong old pin")  

        self.pin=new_pin 
        print("pin change successfully")
        self.__menu() 

    def check_balance(self):
        your_pin=int(input("Enter your pin "))   
        if your_pin==  self.pin:
            print("your balance = ",self.__balance)

        self.__menu()

    def Money_withdraw(self):
        withM=int(input("how much you want to withdraw"))   
        if withM<=self.__balance:
            self.__balance= self.__balance-withM
            print("withdraw succesfully!","now",self.__balance,"is remaining in your account")
        else:
            print("you have insufficient balance :")    


        self.__menu()



obj=Atm()
print(obj.get_balance())

       

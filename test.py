from abc import ABC, abstractmethod
class bank_acc(ABC):
    def create_acc(self,cnic):
        self.cnic=cnic
        print('your account create successfully')

    @abstractmethod    
    def security(self):
        pass    
class acc_balance(bank_acc):
    def desposit_money(self,deposit_amount):
        self.desposit_amount=deposit_amount      

        print('money deposit successfully')  
    
    def security(self): 
        print('your security')


a=acc_balance()
acc_balance.create_acc('122')          
    
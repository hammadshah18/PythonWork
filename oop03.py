class customer:
    def __init__(self,name,gender,address):
        self.name=name
        self.gender=gender
        self.address=address

    def print_address(self):
        print(self.address.get_city(),self.address.pin,self.address.state)
         # here other class access another class 
         #but when we private a self.city its not access so we use gettter method 
    def edit_profile(self,new_name,new_city,new_pin,new_state):
        self.name=new_name
        self.address.edit_address(new_city,new_pin,new_state)

class Address:
    def __init__(self,city,pin,state):
        self.__city=city    # apply encapsulation concept 
        self.pin=pin
        self.state=state  

    def get_city(self):
        return self.__city
    def edit_address(self,new_city,new_pin,new_state):
        self.__city=new_city
        self.pin=new_pin
        self.state=new_state
    


add1=Address('tando Adam',1234,'sindh')
c1=customer('hammad','male',add1) 
c1.print_address()
c1.edit_profile('arbaz','karachi',12534,'punjab')      
c1.print_address()


class customer:
    def __init__(self,name,gender,address):
        self.name=name
        self.gender=gender
        self.address=address

    def print_address(self):
        print(self.address.get_city(),self.address.pin,self.address.state)
    def edit_profile(self,new_name,new_city,new_pin,new_state) :  
        
        self.name=new_name
        self.address.edit_address(new_city,new_pin,new_state)
                 


class ADDRESS:
    def __init__(self,city,pin,state):
        self.__city=city
        self.pin=pin
        self.state=state

    def get_city(self):
        return self.__city
    def edit_address(self,new_city,new_pin,new_state):

        self._city=new_city
        self.pin=new_pin
        self.state=new_state
       
        

       



add=ADDRESS('tando adam',60580,'sindh')
cus=customer('hammad','male',add)
print(cus.name,cus.gender,cus.address)
cus.print_address()
cus.edit_profile('arbaz','karachi',2883,'punjab')
cus.print_address()

class customer:
    def __init__(self,name,gender,address):
        self.name=name
        self.gender=gender
        self.address=address
    def print_address(self):
        print(self.address.get_city(),self.address.pin,self.address.state)

    def edit_profile(self,new_name,new_city,new_pin,new_state):
        self.name=new_name
        self.address.edit_address(new_city,new_pin,new_state)      

class Address:
    def __init__(self,city,pin,state):
        self.__city=city
        self.pin=pin
        self.state=state
    def get_city(self):
        return self.__city
    def edit_address(self,new_city,new_pin,new_state):
        self.__city=new_city
        self.pin=new_pin
        self.state=new_state



add1=Address('tando Adam',12243,'sindh')
c1=customer('hammad','male',add1)  
c1.print_address()
c1.edit_profile('hammad','karachi',13223,'kpk')
c1.print_address()


from abc import ABC,abstractmethod
class Bankapp(ABC):
     
    def database(self):
        print('connected to database')

    @abstractmethod
    def security(self):
        pass    
class mob_app(Bankapp):
    def login(self):
        print('login into mob')
    
    def security(self):
        print('mob security')    


mob=mob_app()
mob.database()
mob.login()
mob.security()

class student:#class
    name="hammad"
    age="18"
    gender="male"
    uni="Muet"
    def __init__(self,fullname,cast):#construcor 
        self.fullname=fullname#construcor 
        self.cast=cast#construcor 
        print("print something here if there is no attributes")

    def welcome(self):
        print("function example:")

    def University(self,cast):
        return self.cast    





    
s2=student("Muhammad Hammad","shah")
print(s2.fullname,s2.cast)
s1= student("arbaz","shah")
print(s1.fullname,s1.cast)
print(s1.name)
print(s1.gender)
print(s1.uni)
print(s1.age)
print(s2.welcome())
print(s2.University(cast="halwa"))
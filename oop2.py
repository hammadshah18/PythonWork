# class point:
#     def __init__(self,x,y):
#         self.x_cod=x
#         self.y_cod=y
#     def __str__(self):
#         return '({},{})'.format(self.x_cod,self.y_cod)

#     def distance_btw_two_point(self,other):

#         return ((other.x_cod - self.x_cod)**2 +(other.y_cod - self.y_cod)**2)**0.5
#     def dis_from_orig(self):
#         return ((self.x_cod)**2 + (self.y_cod)**2)**0.5


      
# class line:
#     def __init__(self,a,b,c):
#         self.a=a
#         self.b=b
#         self.c=c
#     def __str__(self):
#         return f'{self.a}x + {self.b}y + {self.c} = 0' 

#     def check_point_lie(line,point):
#         if line.a*point.x_cod + line.b*point.y_cod + line.c==0:
#             return "point lies on the line"
#         else:
#             return "not lies on the line"
#     def distance_line_and_point(self):
#         return         




# p1=point(1,1) 
# print(f'the distance of point {p1.x_cod,p1.y_cod} from the  origin is {p1.dis_from_orig():.2f}')
# p2=point(2,4)        
# print(p1.distance_btw_two_point(p2))
# l1=line(1,1,-2)
# print(l1)
# print(l1.check_point_lie(p1))

# class person:
#     def __init__(self,input_name,input_country):
#         self.name=input_name
#         self.country=input_country
#     def greet(self):
#         if self.country=="pakistan":
#             print("salam",self.name)
#         else:
#             print("hi",self.name)       

# p=person("hammad","pakistan") 
# print(p.country,p.name ) 
# p.greet()
# Reference variable concepts
# 1->reference VARIBALE HOLDS THE OBJECT 
# 2-> we  can create object without reference variable as well/
# 3-> an object can have multiple reference variables
# assining a new reference varible to an existing object doses not create a new object
# _____________***************_____________
# object without reference variable 
# class person:
#     def __init__(self):
#         self.name="hammad"
#         self.coutry="india"

# person()     #object created here but not assign variable
 
# p=person() #here reference variable is assign
# print(id(p))
# q=p  
# print(id(q)) 
# # here both will indicateed same memory loaction 
# print(p.name)
# print(q.name)
# both will give same value bcz address contain hammad 

# ____________**************_________
# pass by reference
class Person:
    def __init__(self,name,gender):
        self.name=name
        self.gender=gender
def greet(person):
    print("hi my name is ",person.name,"and iam a",person.gender)
    p1=Person("shah","male")
    return p1


p=Person("hammad","male")
x=greet(p)
print(x.name)
print(x.gender)
# function can return object

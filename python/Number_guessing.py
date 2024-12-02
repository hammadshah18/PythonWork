import random
jackpot= random.randint(1,100)
guess=int(input("enter your guessing number "))
count=1
while guess!=jackpot:
    if guess<jackpot:
        print("wrong! enter higher number than this")
    else :
        print("wrong! enter lower number than this")
        
    guess=int(input("enter your guessing number "))  
    count=count+1 
else:
        print("correct guess")
        print("your attempt is =",count)  
   
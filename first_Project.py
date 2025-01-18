class Atm:
    def __init__(self):
        try:
            self.pin=''
            self.balance=0
            self.atm_cash=10000000
            self.loan_balance=0
            self.mini_statement=[]
            self.transaction_history=[]
            print('Welcome to Atm Machine')
            self.menu()
        except Exception as e:
            print('Error initializing Atm',e)

    def menu(self):
        while True:
            try:
                user_input=int(input("""
            1. Create your pin 
            2. Change your pin
            3. Check Balance
            4. Withdraw Money
            5. Deposit Money
            6. Fund Transfer
            7. Apply for Loan
            8. View Transaction History
            9. Mini Statement
            10. Check loan Balance                         
            11. Exit 
            Enter Your Choice : """))
                if user_input == 1:
                    self.create_pin()
                elif user_input == 2:
                    self.change_pin()
                elif user_input == 3:
                    self.check_balance()
                elif user_input == 4:
                    self.withdraw_money()
                elif user_input == 5:
                    self.deposit_money()
                elif user_input == 6:
                    self.fund_transfer()
                elif user_input == 7:
                    self.loan_amount() 
                elif user_input == 8:
                    self.view_transaction_history()
                elif user_input == 9:
                    self.recent_transaction()
                elif user_input==10:
                    self.loan()
                elif user_input ==11: 
                    print('Thank you for Using ATM machine! good bye')
                    break
                else:
                    print('Invalid choice! Please Try again')                             


                
            except Exception as e:
                print('Error in menu section',e)   

    def create_pin(self):
        try:
           
            user_pin=int(input('Create your pin : '))
            self.pin=user_pin
            print('Pin create succesfully!')   
             
        except ValueError :
            print('please enter a numeric value')              
    def change_pin(self):
        try:
            old_pin=int(input('Enter your old pin : '))
            if old_pin==self.pin:

                while True:
                    new_pin=int(input('Enter your new Pin :')) 
                    if new_pin==old_pin:
                        print('New pin cant be same as old pin! plz try Again ')

                    else :
                        self.pin=new_pin
                        print('Pin changed successfully : ')  
                        break
            else:
                print('Wrong Pin!')    


        except ValueError : 
            print('Please enter numeric pin! ') 
    def check_balance(self):
        try:
            while True: 
                pin_checker=int(input('Enter your Pin : '))
                if pin_checker!=self.pin:
                    print('Wrong pin! Enter Pin Once Again ')
                else:
                    print('********Welcome To Account Balance Menu**********')
                    break
            user_pin=int(input('Enter your Pin :'))
            if user_pin==self.pin:
                print('Your balance is : ',self.balance)
            else:
                print('Incorrect Pin!')
        except ValueError :
            print('Please enter numeric value')
    def deposit_money(self):
        try:
            while True: 
                pin_checker=int(input('Enter your Pin : '))
                if pin_checker!=self.pin:
                    print('Wrong pin! Enter Pin Once Again ')
                else:
                    print('********Welcome To Deposit Menu**********')
                    break
            amount=int(input('Enter Your deposit amount :'))  
            if amount>0 and amount<self.atm_cash :
                self.balance=self.balance+amount
                self.atm_cash=self.atm_cash-amount
                self.transaction_history.append(f'deposit {amount}')
                self.mini_statement.append(f'deposit {amount}')
                print(amount,'Amount deposit successfully in your account! Your new balance is',self.balance)
            else:
                print('Invalid amount! or No Amount')
             
        except ValueError :
            print('Please enter numeric Value')

    def withdraw_money(self):
        try:
            while True: 
                pin_checker=int(input('Enter your Pin : '))
                if pin_checker!=self.pin:
                    print('Wrong pin! Enter Pin Once Again ')
                else:
                    print('********Welcome To Withdraw Menu**********')
                    break
                    

            if self.atm_cash<=0:
                print('ATM is out of cash :')
                return

            money_withdraw=int(input('Enter Amount to Withdraw :')) 
            if money_withdraw < self.balance and money_withdraw > 0 and money_withdraw < self.atm_cash :
                self.balance=self.balance-money_withdraw
                self.atm_cash=self.atm_cash-money_withdraw
                self.transaction_history.append(f'Withdraw {money_withdraw}')
                self.mini_statement.append(f'Withdraw {money_withdraw}')
                print(money_withdraw,'is Successfully Withdraw from Your Account!',self.balance,'is Your new balance')
            elif money_withdraw > self.balance:
                print('You Have not Enough Cash to Withdraw ')
            elif money_withdraw > self.atm_cash :
                print('ATM Does not have enoug cash!')
            else:
                print('Invalid Amount or insuffucuent balance ')
        except ValueError:
            print('Please enter numeric Value')
    def fund_transfer(self):
        try:
            while True: 
                pin_checker=int(input('Enter your Pin : '))
                if pin_checker!=self.pin:
                    print('Wrong pin! Enter Pin Once Again ')
                else:
                    print('********Welcome To Fund Transfer Menu**********')
                    break
            acc_no=int(input('Enter account No :'))  
            fund_amount=int(input('Enter Fund Amount :'))
            if fund_amount > self.atm_cash and fund_amount > self.balance:
                print('Insufficient Balance! or ATM Does not have enough Cash!')
                return
            if fund_amount < self.atm_cash and fund_amount < self.balance:
                self.balance -= fund_amount
                self.atm_cash -= fund_amount
                self.transaction_history.append(f'Fund Transfered {fund_amount}')
                self.mini_statement.append(f'Fund Transfered {fund_amount}')
                print(f'You Transfered {fund_amount} Fund in This {acc_no} Account')
                print(f'{self.balance} is Your New Balance')
            else:
                print('Insufficient balance! or any Technical Error!')
        except ValueError:
            print('Please enter numeric Value')
                    
    def loan_amount(self):
        try:
            while True: 
                pin_checker=int(input('Enter your Pin : '))
                if pin_checker!=self.pin:
                    print('Wrong pin! Enter Pin Once Again ')
                else:
                    print('********Welcome To Loan Engagement Menu**********')
                    break
            loan_amount=int(input('Enter Amount for Loan '))
            if self.loan_balance > 0:
                print('Loan already Taken! Firstly Clear Your dues ')
                return
            if  loan_amount < self.atm_cash :
                self.loan_balance += loan_amount
                self.atm_cash -= loan_amount
                self.transaction_history.append(f'{loan_amount} Loan Taken')
                self.mini_statement.append(f'{loan_amount} Loan taken')
                print(loan_amount,'Loan Approved! Now Loan balanced is',self.loan_balance)
            else:
                print('ATM Does not have enough Cash! or Loan Amount exceed limits')
        except ValueError:
            print('Please enter numeric Value')   
    def view_transaction_history(self):
        try:
            while True: 
                pin_checker=int(input('Enter your Pin : '))
                if pin_checker!=self.pin:
                    print('Wrong pin! Enter Pin Once Again ')
                else:
                    print('********Welcome To Transaction History Menu**********')
                    break
            if self.transaction_history:
                print('Transaction History :')
                for transaction in self.transaction_history:
                    print(transaction)
            else:
                print('No transaction History!')     
        except Exception as e:
            print('Please enter numeric Value')

    def recent_transaction(self):
        try:
            while True: 
                pin_checker=int(input('Enter your Pin : '))
                if pin_checker!=self.pin:
                    print('Wrong pin! Enter Pin Once Again ')
                else:
                    print('********Welcome To Mini Statement Menu**********')
                    break
            if self.mini_statement:
                print(' Last five Mini Statement ')
                for last_5statement in self.mini_statement[-5:]:
                    print(last_5statement)
            else :
                print('No Recent Transaction History')
        except Exception as e:
             print('Please enter numeric Value')
                             
    def loan(self):
        try:
            
            while True:
                check_pin=int(input('Enter pin to check loan balance'))
                if check_pin!=self.pin:
                    print('Wrong Pin! Enter pin once Again ')
                else:
                    print('Your Loan Balance is :',self.loan_balance)
                    break
                    
        
        except ValueError:
            print('Please enter numeric Value')

A=Atm()
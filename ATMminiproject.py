class ATM:
    def __init__(self):
        try:
            self.pin = ''
            self.__balance = 0
            self.__transaction_history = []
            self.__recent_transactions = []  # For Mini Statement
            self.__loan_balance = 0  # For Loan or Credit Feature
            self.__atm_cash = 1000000  # Initial ATM cash for maintenance alerts
            print("Welcome to the ATM System!")
            self.__menu()
        except Exception as e:
            print("Error initializing ATM: ", e)

    def __menu(self):
        while True:
            try:
                user_input = input("""
                1. Create PIN
                2. Change PIN
                3. Check Balance
                4. Withdraw Money
                5. Deposit Money
                6. View Transaction History
                7. Mini Statement
                8. Fund Transfer
                9. Apply for Loan
                10. Exit
                Enter your choice: """)

                if user_input == '1':
                    self.create_pin()
                elif user_input == '2':
                    self.change_pin()
                elif user_input == '3':
                    self.check_balance()
                elif user_input == '4':
                    self.withdraw_money()
                elif user_input == '5':
                    self.deposit_money()
                elif user_input == '6':
                    self.view_transaction_history()
                elif user_input == '7':
                    self.mini_statement()
                elif user_input == '8':
                    self.fund_transfer()
                elif user_input == '9':
                    self.apply_for_loan()
                elif user_input == '10':
                    print("Thank you for using the ATM. Goodbye!")
                    break
                else:
                    print("Invalid choice. Please try again.")
            except Exception as e:
                print("Error in menu selection: ", e)

    def create_pin(self):
        try:
            user_pin = int(input("Create your PIN: "))
            self.pin = user_pin
            print("PIN created successfully!")
        except ValueError:
            print("Please enter a numeric PIN.")

    def change_pin(self):
        try:
            old_pin = int(input("Enter your current PIN: "))

            if old_pin == self.pin:
                while True:
                    new_pin = int(input("Enter your new PIN: "))
                    if new_pin == old_pin:
                        print("New PIN cannot be the same as the old PIN. Please try again.")
                    else:
                        self.pin = new_pin
                        print("PIN changed successfully!")
                        break  
            else:
                print("Incorrect current PIN.")
        except ValueError:
            print("Please enter a numeric PIN.")

    def check_balance(self):
        try:
            user_pin = int(input("Enter your PIN: "))
            if user_pin == self.pin:
                print(f"Your balance is: {self.__balance}")
            else:
                print("Incorrect PIN.")
        except ValueError:
            print("Please enter a numeric PIN.")

    def withdraw_money(self):
        try:
            if self.__atm_cash <= 0:
                print("ATM is out of cash. Please try again later.")
                return

            amount = int(input("Enter the amount to withdraw: "))
            if amount > 0 and amount <= self.__balance and amount <= self.__atm_cash:
                self.__balance -= amount
                self.__atm_cash -= amount
                self.__transaction_history.append(f"Withdrawn: {amount}")
                self.__recent_transactions.append(f"Withdrawn: {amount}")
                print(f"Withdrawal successful! New balance: {self.__balance}")
            elif amount > self.__atm_cash:
                print("ATM does not have enough cash.")
            else:
                print("Invalid amount or insufficient balance.")
        except ValueError:
            print("Please enter a numeric value.")

    def deposit_money(self):
        try:
            amount = int(input("Enter the amount to deposit: "))
            if amount > 0:
                self.__balance += amount
                self.__atm_cash += amount
                self.__transaction_history.append(f"Deposited: {amount}")
                self.__recent_transactions.append(f"Deposited: {amount}")
                print(f"Deposit successful! New balance: {self.__balance}")
            else:
                print("Invalid deposit amount.")
        except ValueError:
            print("Please enter a numeric value.")

    def view_transaction_history(self):
        try:
            if self.__transaction_history:
                print("Transaction History:")
                for transaction in self.__transaction_history:
                    print(transaction)
            else:
                print("No transactions available.")
        except Exception as e:
            print("Error displaying transaction history: ", e)

    def mini_statement(self):
        try:
            print("Mini Statement (Last 5 Transactions):")
            for transaction in self.__recent_transactions[-5:]:
                print(transaction)
        except Exception as e:
            print("Error displaying mini statement: ", e)

    def fund_transfer(self):
        try:
            recipient_account = input("Enter the recipient's account number: ")
            amount = int(input("Enter the amount to transfer: "))
            if amount > 0 and amount <= self.__balance:
                self.__balance -= amount
                self.__transaction_history.append(f"Transferred: {amount} to {recipient_account}")
                self.__recent_transactions.append(f"Transferred: {amount} to {recipient_account}")
                print(f"Transfer successful! New balance: {self.__balance}")
            else:
                print("Invalid amount or insufficient balance.")
        except ValueError:
            print("Please enter a numeric value.")

    def apply_for_loan(self):
        try:
            if self.__loan_balance > 0:
                print(f"You already have an outstanding loan balance of {self.__loan_balance}.")
                return

            loan_amount = int(input("Enter the loan amount you wish to apply for: "))
            if loan_amount > 0 and loan_amount <= 50000:  # Basic eligibility check
                self.__loan_balance += loan_amount
                self.__transaction_history.append(f"Loan Approved: {loan_amount}")
                self.__recent_transactions.append(f"Loan Approved: {loan_amount}")
                print(f"Loan approved! Loan balance: {self.__loan_balance}")
            else:
                print("Loan amount exceeds the limit or is invalid.")

        except ValueError:
            print("Please enter a numeric value.")



atm = ATM()

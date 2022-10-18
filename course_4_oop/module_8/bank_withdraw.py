class Bank:
    def __init__(self, balance):
        self.balance = balance
        self.min_withdraw = 100
        self.max_withdraw = 10000

    def get_balance(self):
        return self.balance

    def withdraw(self, amount):
        if amount < self.min_withdraw:
            return f"Minimun withdraw: {self.min_withdraw}"
        elif amount > self.max_withdraw:
            return f"You crossed max limit: {self.max_withdraw}"
        elif amount > self.balance:
            return "You are broke!!!"
        else:
            self.balance = self.balance - amount
            return f"Here is your money: {amount}"
    
    def deposit(self, amount):
        self.balance = self.balance + amount

my_bank = Bank(8000)

acc_status = my_bank.withdraw(900)
print(acc_status)
print(my_bank.get_balance())
my_bank.deposit(5000)
print(my_bank.get_balance())
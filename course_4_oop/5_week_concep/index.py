# shopping cart design

class User:
    user_lst = []

    def __init__(self, username, password) -> None:
        self.username = username
        self.password = password


class Item:
    def __init__(self, itemID, price, description, quantity) -> None:
        self.itemId = itemID
        self.price = price
        self.description = description
        self.quantity = quantity


class ShoppingBasket:
    user_lst = []
    user_ordered_data = {}
    itemDB = {}

    def create_account(self):
        name = input("Enter your username: ")
        isNameExist = False
        for user in self.user_lst:
            if user.username == name:
                print("Account already exits")
                isNameExist = True
                break
        if isNameExist: 
            password = input("Enter your password: ")


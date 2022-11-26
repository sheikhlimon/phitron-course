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
    itemDB = []

    def get_userlst(self):
        return self.user_lst

    def create_account(self):
        name = input("Enter your username: ")
        isNameExist = False
        for user in self.get_userlst():  # user already exits
            if user["username"] == name:
                print("Account already exits")
                isNameExist = True
                break
        if isNameExist == False:
            password = input("Enter your password: ")
            self.new_user = User(name, password)
            self.user_lst.append(vars(self.new_user))
            print("Account created successfully")

    def addItemToCart(self):
        username = input("Enter your username: ")
        if username in self.user_ordered_data.keys():
            itemid = input("Enter Enter Id: ")
            quantity = int(input("Enter Item Quantity: "))

            flag = 0
            for i in self.itemDB:
                if i['itemID'] == itemid and i['quantity'] <= quantity:
                    print("Items available")
                    flag = 1
                    break

            if not flag:
                print("Items not available")
            else:
                self.user_ordered_data[username] = [
                    {"itemID": itemid, "quantity": quantity}]

        def updateProductCart(self):
            username = input("Enter User Name: ")
            itemid = input("Enter item ID: ")




# a = [{"itemID": 12, "price": 300, "description": "description", "quantity": 4}, {"itemID":13, "price":300, "description": "description", "quantity": 5}]
b = ShoppingBasket()
b.create_account()
print(b.get_userlst())

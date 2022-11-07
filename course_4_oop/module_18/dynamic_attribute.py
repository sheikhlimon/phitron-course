class Item:
    all = []
    def __init__(self, name, price):
        self.itemName = name
        self.itemPrice = price
        self.all.append(self)

    def __repr__(self) -> str:
        return f"(Item {self.itemName},{self.itemPrice})"

        
item1=Item("bowl", 100)
item2=Item("plate", 150)

print(Item.all)

print(item1.__dict__)
print(item1.__dict__)
class Star_Cinema:
    hall_list = []

    def entry_hall(self, obj):
        self.hall_list.append(obj)


# Class Hall definition
class Hall(Star_Cinema):
    def __init__(self, rows, cols, hall_no):
        self.seats = {}
        self.show_list = []
        self.rows = rows
        self.cols = cols
        self.hall_no = hall_no
        super().entry_hall(self)

    def entry_show(self, movie_name, id, time):
        self.show_list.append((id, movie_name, time))
        # self.seats[id] = [['empty' for i in range(
        # self.rows)]for j in range(self.cols)]
        self.seats[id] = [[0]*self.rows]*self.cols

    def book_seats(self, customer_name, ph_no, id, tup_list):
        # letter_to_index = {"A": 0, "B": 1, "C": 2}
        # digit_to_index = {"1": 0, "2": 1, "3": 2, "4": 3, "5": 4}
        arr = self.seats[id]
        
        # arr = [[72, 85, 87, 90, 69], [80, 87, 65, 89, 85], [96, 91, 70, 78, 97]]

        print(arr)
        for value in range(len(arr)):
            for i in range(value):
                print(i[0]) 

                
        

    def view_show_list(self):
        for show in self.show_list:
            print(
                f"Movie Name: {show[1]}\t Show ID: {show[0]}\t Time:{show[2]}")

    def view_available_seats(self, id):
        for key, val in self.seats.items():
            if key == id:
                for seat in val:
                    print('\tseat')


cinema = Hall(5, 3, "A10")
cinema.entry_show("Black Adam", "ae122", "10pm")
# cinema.view_available_seats("ae122")
tup_list = [(0, 0)]
cinema.book_seats("limon", 86876, "ae122", [tup_list])

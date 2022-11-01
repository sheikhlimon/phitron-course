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
        self.seats[id] = [['empty' for i in range(
            self.rows)]for j in range(self.cols)]

    def book_seats(self, customer_name, ph_no, id):
        tup_list = [(0,0),(0,1),(0,2),(0,3),(0,4)]
        booked = 1
        for i in range(len(tup_list)):
            print(tup_list[i])
            row = tup_list[i][0]
            col = tup_list[i][1]
            self.seats[id][row][col] = "changed"
        print(self.seats[id])
        
        row = 0
        col = 0

        d = {"jey", 22}
        print(d[0])

        


            

    def view_show_list(self):
        for show in self.show_list:
            print(
                f"Movie Name: {show[1]}\t Show ID: {show[0]}\t Time:{show[2]}")

    def view_available_seats(self, id):
        for key, val in self.seats.items():
            if key == id:
                for seat in val:
                    print('\t'.join(map(str, seat)))


cinema = Hall(5, 3, "A10")
cinema.entry_show("Black Adam", "ae122", "10pm")
# cinema.view_available_seats("ae122")
cinema.book_seats("limon", 544, "ae122")

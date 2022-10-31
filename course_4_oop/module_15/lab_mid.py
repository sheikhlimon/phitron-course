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
        self.movie_name = movie_name
        self.id = id
        self.time = time
        self.show_list.append((id, movie_name, time))
        self.seats = {
            id: [[0 for i in range(self.cols)]for j in range(self.rows)]}
        # for i in self.seats[id]:
        # print(i)

    def book_seats(self, customer_name, ph_no, id):
        tup_list = [(0, 0)]
        print(id in self.seats)
        for i in range(len(tup_list)):
            # print(tup_list[i])
            row = tup_list[i][0]
            col = tup_list[i][1]
            for j in self.seats:
                if j == id:
                    print(j)
                    break



    def view_show_list(self):
        for show in self.show_list:
            print(
                f"Movie Name: {show[1]}\t Show ID: {show[0]}\t Time:{show[2]}")
        # print("\n")


cinema = Hall(3, 5, 3)
cinema.entry_show("Black Adam", "ae122", "10pm")
cinema.entry_show("Superman", "ae123", "8pm")
cinema.view_show_list()
cinema.book_seats("limon", "0254", "ae122")

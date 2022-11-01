class Star_Cinema:
    __hall_list = []

    def entry_hall(self, obj):
        self.__hall_list.append(obj)


# Class Hall definition
class Hall(Star_Cinema):
    def __init__(self, rows, cols, hall_no):
        self.__seats = {}
        self.__show_list = []
        self.__rows = rows
        self.__cols = cols
        self.__hall_no = hall_no
        super().entry_hall(self)

    def entry_show(self, movie_name, id, time):
        self.__movie_name = movie_name
        self.__id = id
        self.__time = time
        self.__show_list.append((id, movie_name, time))
        self.__seats[id] = [[False for i in range(
            self.__rows)]for j in range(self.__cols)]

    def book_seats(self, customer_name, ph_no, id, tup_list):
        for key, value in self.__seats.items():
            if key == id:
                for row, col in enumerate(value):
                    for tup_row, tup_col in enumerate(tup_list):
                        if value[tup_col[0]][tup_col[1]] != False:
                            print('\nSeats Alreday Booked')
                            break
                        else:
                            value[tup_col[0]][tup_col[1]] = 'X'
                            print(
                                f"\n{'#'*5} Ticket Booked Successfully! {'#'*5}\n{'-'*50}")
                            print(
                                f"\nName: {customer_name}\nPhone Number: {ph_no}\n")
                            print(
                                f"Movie Name: {self.__movie_name}\t\t Movie Time: {self.__time}")
                            print(f"Tickets: {tup_list}")
                            print(f"Hall: {self.__hall_no}\n\n{'-'*50}")
                    break
                break

    def view_show_list(self):
        for show in self.__show_list:
            print(
                f"Movie Name: {show[1]}\t Show ID: {show[0]}\t Time:{show[2]}")

    def view_available_seats(self, id):
        for key, val in self.__seats.items():
            if key == id:
                print(f"Movie Name: {self.__movie_name}\t\t Movie Time: {self.__time}")
                print(f"X for already booked seats\n{'-'*50}")
                for seat in val:
                    print('\t'.join(map(str, seat)))
                print(f"{'-'*50}")


cinema = Hall(5, 3, "A10")
cinema.entry_show("Black Adam", "ae122", "10pm")
cinema.entry_show("Superman", "ae123", "8pm")

while True:
    print("1. VIEW ALL SHOWS TODAY \n2. VIEW AVAILABLE SEATS \n3. BOOK TICKET")
    user_input = input("ENTER OPTION: ")
    if user_input == "1":
        print("\n")
        print('-'*55)
        cinema.view_show_list()
        print('-'*55)
        print("\n")
    elif user_input == "2":
        id = input("ENTER SHOW ID: ")
        print("\n")
        cinema.view_available_seats(id)
        # print('-'*50)
        print("\n")

    elif user_input == "3":
        customer = input("ENTER CUSTOMER NAME: ")
        phone = input("ENTER PHONE NUMBER: ")
        show_id = input("ENTER SHOW ID: ")
        ticket = int(input("ENTER NUMBER OF TICKETS: "))
        for i in range(ticket):
            # input("ENTER SEAT NUMBER: ")
            row = int(input("Row: "))
            col = int(input("Col: "))
            tup_list = (row, col)
            cinema.book_seats(customer, phone, show_id, [tup_list])

#id matching 
#seat problem

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
        self.__show_list.append((movie_name, id, time))
        self.__seats[id] = [[f"{chr(65+j)}{i}" for i in range(self.__rows)]for j in range(self.__cols)]
        print(self.__seats[id])

    def book_seats(self, customer_name, ph_no, id, tup_list):
        for key, value in self.__seats.items():
            if key == id:
                for item in tup_list:
                    elm1 = item[0]
                    elm2 = item[1]
                    if value[elm1][elm2] == 'X':
                        print('\nSeats Alreday Booked\n')
                        break
                    else:
                        value[elm1][elm2] = 'X'
                        print(f"\n\t{'#'*5} Ticket Booked Successfully! {'#'*5}\n{'-'*50}")
                        print(f"\nName: {customer_name}\nPhone Number: {ph_no}")
                        self.__show_mov_name_time(id)
                        print(f"Tickets: {tup_list}")
                        print(f"Hall: {self.__hall_no}\n\n{'-'*50}")
                        break
                break

    def view_show_list(self):
        for show in self.__show_list:
            print(
                f"Movie Name: {show[0]}\t Show ID: {show[1]}\t Time:{show[2]}")

    def __show_mov_name_time(self, id):
        for show in self.__show_list:
            if id == show[1]:
                print(f"\nMovie Name: {show[0]}\t\t Movie Time:{show[2]}")
                break

    def view_available_seats(self, id):
        for key, val in self.__seats.items():
            if key == id:
                self.__show_mov_name_time(id)
                print(f"X for already booked seats\n{'-'*50}")
                for seat in val:
                    for item in seat:
                        print('\t', item, end=" ")
                    print()
                print(f"{'-'*50}\n")
                break


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
        cinema.view_available_seats(id)

    elif user_input == "3":
        customer = input("ENTER CUSTOMER NAME: ")
        phone = input("ENTER PHONE NUMBER: ")
        show_id = input("ENTER SHOW ID: ")
        ticket = int(input("ENTER NUMBER OF TICKETS: "))
        for i in range(ticket):
            seat = input("ENTER SEAT NUMBER: ")
            row = ord(seat[0])-65
            col = int(seat[1])
            tup_list = (row, col)
            cinema.book_seats(customer, phone, show_id, [tup_list])

class TravelAgent:
    def __init__(self, name):
        self.name = name
        self.trips = None

    def set_trip_one_city_one_way(self):
        pass

    def set_trip_one_city_two_way(self):
        pass

    def set_trip_multi_city_one_way(self):
        pass

    def set_trip_multi_city_round(self):
        pass

    def __repr__(self) -> str:
        return f'TravelAgent: {self.name}'

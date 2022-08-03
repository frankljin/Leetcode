class MyCalendar:
    def __init__(self):
        self.bookings = []

    def book(self, start: int, end: int) -> bool:
        for s, e in self.bookings:
            if s < end and start < e:
                return False
        self.bookings.append([start, end])
        return True
        
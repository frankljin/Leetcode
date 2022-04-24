class UndergroundSystem:

    def __init__(self):
        self.checkIns = {}
        self.totalTimes = {}


    def checkIn(self, id: int, stationName: str, t: int) -> None:
        self.checkIns[id] = [stationName, t]
        

    def checkOut(self, id: int, stationName: str, t: int) -> None:
        startTime = self.checkIns[id][1]
        totalTime = t - startTime
        startStation = self.checkIns[id][0]
        route = startStation + "-" + stationName
        if route in self.totalTimes:
            self.totalTimes[route][0] += totalTime
            self.totalTimes[route][1] += 1
        else:
            self.totalTimes[route] = [totalTime, 1]


    def getAverageTime(self, startStation: str, endStation: str) -> float:
        route = startStation + "-" + endStation
        totalTime = self.totalTimes[route][0]
        totalTrips = self.totalTimes[route][1]
        return totalTime / totalTrips

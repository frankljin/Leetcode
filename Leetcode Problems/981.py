class TimeMap:

    def __init__(self):
        self.dictionary = {}

    def set(self, key: str, value: str, timestamp: int) -> None:
        if key not in self.dictionary:
            self.dictionary[key] = [[timestamp, value]]
        else:
            self.dictionary[key].append([timestamp, value])

    def get(self, key: str, timestamp: int) -> str:
        if key not in self.dictionary:
            return ""
        most_recent_timestamp = self.dictionary[key][-1][0]
        if timestamp >= most_recent_timestamp:
            return self.dictionary[key][-1][1]
        left = 0
        right = len(self.dictionary[key]) - 1
        while left < right:
            mid = int((left + right) / 2)
            midTimestamp = self.dictionary[key][mid][0]
            if midTimestamp == timestamp:
                return self.dictionary[key][mid][1]
            elif midTimestamp > timestamp:
                right = mid - 1
            elif midTimestamp < timestamp:
                left = mid + 1
        if self.dictionary[key][mid][0] > timestamp:
            return ""
        else:
            return self.dictionary[key][mid][1]


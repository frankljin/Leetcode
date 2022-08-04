class Solution:
    def maximumGroups(self, grades: List[int]) -> int:
        grades = sorted(grades)
        groups = []
        currGroupSize = 1
        i = 0
        currGroup = []
        for grade in grades:
            if i < currGroupSize:
                currGroup.append(grade)
                i += 1
            else:
                groups.append(currGroup)
                currGroup = []
                currGroupSize += 1
                currGroup.append(grade)
                i = 1
        if i == currGroupSize:
            return len(groups) + 1
        else:
            return len(groups)
            
        
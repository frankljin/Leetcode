class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        sortedStrs = ["".join(sorted(x)) for x in strs]
        strs = [x for _, x in sorted(zip(sortedStrs, strs))]
        sortedStrs = sorted(sortedStrs)
        currList = [strs[0]]
        res = []
        for i in range(1, len(sortedStrs)):
            if sortedStrs[i] == sortedStrs[i - 1]:
                currList.append(strs[i])
            else:
                res.append(currList)
                currList = [strs[i]]
        res.append(currList)
        return res
                
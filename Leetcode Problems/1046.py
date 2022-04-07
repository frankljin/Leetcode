class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        while len(stones) > 1:
            stones = sorted(stones)
            x = stones[-2]
            y = stones[-1]
            if x == y:
                stones.pop()
                stones.pop()
            else:
                stones.pop(-2)
                stones[-1] -= x 
                if stones[-1] <= 0:
                    stones.pop()
                
        if len(stones) > 0:
            return stones[0]
        return 0
            
        
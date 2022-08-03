class Solution:
    def repeatedCharacter(self, s: str) -> str:
        occurredCharacters = set()
        for c in s:
            if c in occurredCharacters:
                return c
            occurredCharacters.add(c)
        
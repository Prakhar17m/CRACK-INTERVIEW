_class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.split()
        word = words[::-1]
        return " ".join(word)
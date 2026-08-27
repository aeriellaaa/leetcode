class Solution(object):
    def reverseWords(self, s):
        arr=s.strip().split()
        arr.reverse()
        return" ".join(arr)
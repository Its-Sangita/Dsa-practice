class Solution(object):
    def isPalindrome(self, x):
        if x<0:
            return False
        elif (0<=x<10):
            return True
        elif (x ==10):
            return False 
        else:
            s = str(x)
            return s == s[::-1]

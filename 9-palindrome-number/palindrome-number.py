class Solution(object):
    def isPalindrome(self, x):
        if x<0:
            return False
        num=x
        a=0
        while num!=0:
            temp=num%10
            a=a*10+temp
            num//=10
        
        if a==x:
            return True
        else:
            return False
        
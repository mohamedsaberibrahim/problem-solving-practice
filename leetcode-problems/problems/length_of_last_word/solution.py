class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        result = s.split(' ')
        result = ' '.join(result).split()
        print(result )
        if len(result) > 0: 
            return len(result[-1])
        else:
            return 0
    
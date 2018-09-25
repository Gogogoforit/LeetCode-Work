/*

Given a string, find the length of the longest substring without repeating characters.

Example 1:

Input: "abcabcbb"
Output: 3 
Explanation: The answer is "abc", with the length of 3. 
Example 2:

Input: "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3. 
             Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
             
             */
            
 class Solution:
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        if(len(s)<=1):
            return len(s)
        max_str = s[0]
        temp_str = s[0]
        for i in range(len(s)):
            for j in range(i+1,len(s)):
                if s[j] not in s[i:j]:
                    temp_str = s[i:j+1]
                else:
                    break
            if(len(temp_str) > len(max_str)):
                max_str = temp_str
        return len(max_str)

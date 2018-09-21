//题目链接：https://leetcode.com/problems/palindrome-number/
class Solution {
public:
    bool isPalindrome(int x) {
        int x_temp = x;
        int result = 0;
        int temp =0;
        
        if(x_temp < 0) {
            return false;
        }
        
        while(x_temp) {
            temp = x_temp%10;
            x_temp = x_temp/10;
            result = result * 10 + temp;
        }
        
        if(x == result)
            return true;
        else 
            return false;

    }
};

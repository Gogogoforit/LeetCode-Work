//题目链接： https://leetcode.com/problems/reverse-integer/
class Solution {
public:
    int reverse(int x) {
        long int result = 0;
        int base = 10;
        //deal with negative
        bool negative_num = false;
        if(x < 0) {
            negative_num = true;
            x = x * -1;
        }
        
        while(x) {
            int temp = x%10;
            x = x/10;
            result = result * base + temp;
        }
        
        if(negative_num) {
            result *= -1;
        }
        
        if(result>INT_MAX || result<INT_MIN) {
            return 0;
        }
        else {
            return result;
        }
        
    }
};

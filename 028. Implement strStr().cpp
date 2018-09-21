//题目链接： https://leetcode.com/problems/implement-strstr/
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "" )
            return 0;
        if(haystack.size() <needle.size())
            return -1;        
        
        int i=0;
        int j=0;                           
        while (i<haystack.size()) {
            if (haystack[i] != needle[0]) {
                i++;
            }
            else {
                int temp = i;
                while (j<needle.size() && haystack[temp] == needle[j]) {
                    temp++;
                    j++;
                }
                
                if(j == needle.size()){
                    return i;
                }
                else {
                    i = i+1;
                    j = 0;
                }

            }
        }
        return -1;
    }
};

//链接： https://leetcode.com/problems/valid-parentheses/
class Solution {
public:
    bool isValid (string s) {
        stack<char> valid;
        if (s.length() == 0)
            return true;
        
        for (int i=0; i<s.length();i++) {
            char option = s[i];
            
            if (valid.size()==0)
                valid.push(option);
            else {
                char old = valid.top();
                if( (old ==  '(' && option == ')')||
                    (old ==  '{' && option == '}')||
                    (old ==  '[' && option == ']')) {
                    valid.pop(); 
                }
                else {
                    valid.push(option);
                }
            
                if (valid.size() > s.length()/2)
                    return false;
            }

        }
        
        if(valid.size() == 0) {
            return true;    
        }
        else {
            return false;
        }

    }
};

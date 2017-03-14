//https://leetcode.com/problems/find-the-difference/#/description
//思想就是去做一个字典。

class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int>v(26,0);
        int i,j;
        for(i=0;i<s.size();i++)
            v[s[i]-'a']++;
        for(j=0;j<t.size();j++)
            v[t[j]-'a']--;
        for(j=0;j<v.size();j++)
            if(v[j]==-1)
                return 'a'+j;
    }
};

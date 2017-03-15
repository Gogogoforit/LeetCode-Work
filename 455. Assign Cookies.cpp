//https://leetcode.com/problems/assign-cookies/#/description

//两个都先排序，然后挨个比较。
 bool cmp( int a, int b ) {
   return a > b;
 }              

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
    int i=0;
    int j=0;
    int Content=0;
    sort(g.begin(),g.end(),cmp);
    sort(s.begin(),s.end(),cmp);
    
    
    while(i<g.size() && j<s.size())
        {
            if(g[i]<=s[j])
            {
                i++;
                j++;
                Content++;
            }
            else
                i++;
        }
        
    return Content;
                
    }
};

//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/#/description
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    int i=0;
    int up=numbers.size()-1;
    vector<int>v(2,0);
    while(up)
    {
        if(numbers[i]+numbers[up] == target)
        {
            v[0]= i+1;
            v[1]= up+1; 
            return v;
        }
        else if(numbers[i]+numbers[up] > target)
            up--;
        else 
            i++;
    }
    
    //最才开始想到得办法过于复杂。。毕竟O(N)和O(N^2)差别还是挺大的。。。
    /*
    for(i=0;i<numbers.size() && flag;i++)
        for(j=numbers.size()-1;j>i && flag;j--)
        {
            if(numbers[i]+numbers[j] == target)
            {
                
                flag=0;
            }
        }
    */
  
    
    }
};

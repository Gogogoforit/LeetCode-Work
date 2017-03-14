//https://leetcode.com/problems/move-zeroes/#/solutions
#include <vector>

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int count =0;
    
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]!=0)
        {
            nums[count]=nums[i];
            count++;
        }
    }
    for(int j=count;j<nums.size();j++)
        nums[j]=0;

    
    }
};


//nums.erase(nums.begin() + i); //注意这里的erase后不能写为nums[i]
                                        //不然出现的错误no matching function for call to std::vector<int>::erase(int&) [closed]
                                        //erase takes an iterator, not an index value. 
                                        //A simple fix is to use docel.erase(docel.begin() + j);

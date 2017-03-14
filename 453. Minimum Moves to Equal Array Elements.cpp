//https://leetcode.com/problems/minimum-moves-to-equal-array-elements/#/description
//思想：n个数字中的n-1个数字加1等效于，其中一个减一

class Solution {
public:
    int minMoves(vector<int>& nums) {
    int min=nums[0];
    int sum=0;
    for(int i=0;i<nums.size();i++)
        if(nums[i]<min) 
            min=nums[i];
    for(int i=0;i<nums.size();i++)
        sum +=(nums[i]-min);
    return sum;
    }
};

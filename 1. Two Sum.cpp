//题目链接：https://leetcode.com/problems/two-sum/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(size_t i{0}; i < nums.size(); i++){
            for(size_t j{0}; j < nums.size(); j++){
                if(i != j){
                    if(nums[i] + nums[j] == target){
                        return vector<int>{i,j};
                    }
                }
            }
        }
    }
};

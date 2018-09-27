//https://leetcode.com/problems/3sum/discuss/7402/Share-my-AC-C%2B%2B-solution-around-50ms-O(N*N)-with-explanation-and-comments

//思路： 无序变有序

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> vv;

        sort(nums.begin(),nums.end());
        
        if(nums.size()<3)
            return vv;
        
        int i,left,right;
        i = left = right = 0;
        
        while(i<nums.size()) {
            int target = -nums[i];
            int left = i+1;
            int right = nums.size()-1;

            while(left<right) {                       
                if(left!=right && nums[left]+nums[right]==target) {     
                    vector<int> v(3, 0);
                    v[0] = nums[i];
                    v[1] = nums[left];
                    v[2] = nums[right];
                    vv.push_back(v);
                    
                    while (left < right && nums[left] == v[1]) left++;
                    while (left < right && nums[right] == v[2]) right--;                    
                }
                
                if(nums[left]+nums[right]<target) {
                    left++;
                }

                if(nums[left]+nums[right]>target) {
                    right--;
                }
            }
            while(i<nums.size() && nums[i] ==nums[i+1])
                i++;
            
            
            i++;
        }
        
        return vv;

    }
};

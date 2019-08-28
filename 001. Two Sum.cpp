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

//2019年8月28日更新：
//思路，新建一个Hash Table，再从Hash Table中，去进行查询。

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> map;
        unordered_map <int,int>::iterator it;
        vector<int> s;
    
        for(int i = 0; i < nums.size(); i++){
            map.emplace(nums[i], i);
        
        }
        for(int i = 0; i < nums.size(); i++){

            it = map.find(target-nums[i]);
            if(it != map.end() && map[target-nums[i]] != i){

                s.push_back(i);
                s.push_back(map[target-nums[i]]);

                return s;           
            }
        }
        return s;

    }
};

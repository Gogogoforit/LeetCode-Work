//https://leetcode.com/problems/relative-ranks/#/description

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<string> v(nums.size(),"a");
      //  sort(nums.begin(),nums.end());
        for(int i=0; i< nums.size();i++)
        {
            int count=0;
            for(int j=0; j< nums.size();j++)
            {
                if(nums[i]<=nums[j])
                    count++;
            }
            if(count==1)
                v[i]="Gold Medal";
            else if(count==2)
                v[i]="Silver Medal";
            else if(count==3)
                v[i]="Bronze Medal";
            else
                v[i]=to_string(count); //数字转为字符串
        }
        
    return v;
    }
};

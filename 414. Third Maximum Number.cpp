#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int big_1;
        int big_2;
        int big_3;
        bool big_2_exist=false;
        bool big_3_exist=false;

        for(int i=0;i<nums.size();i++){
            if (i==0){
                big_1=nums[i];
                continue;
            }
            else
            {
                if(!big_2_exist)
                {
                    if(nums[i]==big_1){
                        continue;
                    }
                    else{
                        big_2=(big_1<nums[i])?big_1:nums[i];
                        big_1=(big_1>nums[i])?big_1:nums[i];
                        big_2_exist=true;
                        continue;
                    }
                }
                else
                {
                    if((nums[i]==big_1)||(nums[i]==big_2)){
                        cout<<i<<"overlap"<<endl;
                        continue;
                    }
                    else
                    {
                        if (nums[i]>big_1){
                            big_3=big_2;
                            big_2=big_1;
                            big_1=nums[i];
                            big_3_exist=true;
                        }
                        else if(nums[i]>big_2){
                            big_3=big_2;
                            big_2=nums[i];
                            big_3_exist=true;
                        }

                        else{
                            if(!big_3_exist){
                            big_3=nums[i];
                            big_3_exist=true;
                            }
                            else if(nums[i]>big_3){
                                big_3=nums[i];
                                big_3_exist=true;
                            }
                        }
                    }
                }
            }
        }

    if (big_3_exist)
        return big_3;
    else
        return big_1;

    }
};




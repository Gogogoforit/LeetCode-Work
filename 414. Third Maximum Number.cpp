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
//                        big_1=(big_1>nums[i])?big_1:nums[i];
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

//下面的部分为改正版。。原版我这里为了回避最小整数，所以超级复杂。。。。然而其实没有这么麻烦的。。。
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;
        for (int num : nums) {
            if (num > first) {
                third = second;
                second = first;
                first = num;
            } else if (num > second && num < first) {
                third = second;
                second = num;
            } else if (num > third && num < second) {
                third = num;
            }
        }
        return (third == LONG_MIN || third == second) ? first : third;
    }
};
//参考：C++ 常量范围 
//http://blog.sina.com.cn/s/blog_696226720100o164.html

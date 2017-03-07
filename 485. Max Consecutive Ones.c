//https://leetcode.com/problems/max-consecutive-ones/?tab=Description
int findMaxConsecutiveOnes(int* nums, int numsSize) 
{
     int count = 0, Max = 0;
     for(int i = 0; i < numsSize; i++)
     {
          if(nums[i] == 1)
          {
             count++;
          }
          else
          {
              if(count > max)
                 Max = count;
                 count = 0;
          }
     }
     //如果最后一个是1，这个判断是很有必要的
     if(count > max)
         Max = count;
    
    return Max;   
}

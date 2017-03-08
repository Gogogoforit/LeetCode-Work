//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/?tab=Solutions
//C总是超时QAQ
/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
 /*
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int count = 0;
    int i, temp;
    for(i=0;i<numsSize;i++)
        {
        temp = nums[i];
        returnSize[temp] =temp;
        }
    for(i=0;i<numsSize;i++)
        if(returnSize[i]==i)
            returnSize[i]=0;
        else
        {
            returnSize[count]=returnSize[i];
            count++;
        }
        
    return returnSize;
            
}
*/
public class Solution {
        public static List<Integer> findDisappearedNumbers2(int[] nums) {
         List<Integer> result=new ArrayList<Integer>();
         int len=nums.length;
         for(int i=0;i<len;i++){
             nums[Math.abs(nums[i])-1]=-Math.abs(nums[Math.abs(nums[i])-1]);
         }
         for(int i=0;i<len;i++){
             if(nums[i]>0){
                 result.add(i+1);
             }
         }
         return result;
     }
}

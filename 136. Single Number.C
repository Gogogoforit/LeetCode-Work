//https://leetcode.com/problems/single-number/?tab=Description
/*
Given an array of integers, every element appears twice except for one. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Subscribe to see which companies asked this question.
*/
int singleNumber(int* nums, int numsSize) {
    int t = nums[0];
    int i = 1;
    while(i<numsSize)
    {
        t= t ^ nums[i];
        i++;
    }
    return t;
}

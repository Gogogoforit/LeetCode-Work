class Solution(object):
    def fourSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        res = []
        nums.sort()
 
        for i in range(len(nums) - 3):
            if i > 0 and nums[i] == nums[i-1]:
                continue
            a = nums[i]
 
            for j in range(i+1,len(nums) - 2):
                if j > i+1 and nums[j] == nums[j-1]:
                    continue;
                
                b = nums[j]
                left = j+1
                right = len(nums) - 1
 
                while left < right:
                    if a + b + nums[left] + nums[right] == target:
                        res.append([a,b,nums[left],nums[right]])
 
                        while (left < right and nums[left] == nums[left+1]):
                            left += 1
 
                        while (left < right and nums[right] == nums[right-1]):
                            right -=1
                        
                        left +=1
                        right-=1
 
                    elif  a + b + nums[left] + nums[right] > target:
                        right -= 1
                    else:
                        left += 1
 
        return res

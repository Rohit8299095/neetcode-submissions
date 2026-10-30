class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mp={}
        res=[]
        for i in range(len(nums)):
            if target-nums[i] in mp:
                idx=mp[target-nums[i]]
                res.append(idx)
                res.append(i);
                break
            mp[nums[i]]=i
        return res
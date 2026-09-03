class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        dic = {}

        for i in range(len(nums)):

            diff = target - nums[i]

            if diff in dic:
                if i< dic[diff]:
                    return [i, dic[diff]]
                else:
                    return [dic[diff],i]

            dic[nums[i]] = i

        return []


#https://leetcode.com/problems/binary-search/

nums=[-1,0,3,5,9,12]
target=9

def search(nums, target) -> int:
        l, r = 0, len(nums) - 1
        while l <= r:
            m = (l + r) // 2

            if target == nums[m]:
                return m
            if target > nums[m]:
                l = m + 1
            else:
                r = m - 1
        return -1

print("Solution: ", search(nums,target))
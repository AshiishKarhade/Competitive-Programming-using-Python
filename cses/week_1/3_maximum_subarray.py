"""
Given an array of n integers, your task is to find the maximum sum of values in a contiguous, 
nonempty subarray.

Input
The first input line has an integer n: the size of the array.

The second line has n integers x1,x2,…,xn: the array values.
Output

Print one integer: the maximum subarray sum.

Constraints
1≤n≤2⋅105
−109≤xi≤109
Example

Input:
8
-1 3 -2 5 3 -5 2 2

Output:
9
"""

def maxSubArray(nums):
        if len(nums)==1:
            return nums[0]
        maxi = 0
        for a in range(len(nums)):
            for b in range(a, len(nums)):
                total = 0
                for i in range(a, b):
                    total += nums[i]
                maxi = maxi if maxi > total else total
        return maxi
    
N = int(input())
numList = list(map(int, input().split(' ')[:N]))
print(maxSubArray(numList))

"""
You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

Output

Print the missing number.

Constraints
2≤n≤2⋅105
Example

Input:
5
2 3 1 5

Output:
4
"""
# no. of elements
n = int(input())
# ds to store numbers
nums = []
for n in range(n-1):
    no = int(input())
    nums.append(no)

#sort the list
nums = sorted(nums)
#print(nums)

miss = nums[0] - 1
for i in range(len(nums)-1):
    if nums[i+1] != nums[i]+1:
        miss = nums[i] + 1

print(miss)

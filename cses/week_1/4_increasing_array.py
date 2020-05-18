"""
You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

On each turn, you may increase the value of any element by one. What is the minimum number of turns required?

Input

The first input line contains an integer n: the size of the array.

Then, the second line contains n integers x1,x2,…,xn: the contents of the array.

Output

Print the minimum number of turns.

Constraints
1≤n≤2⋅105
1≤xi≤109
Example

Input:
5
3 2 5 1 7

Output:
5
"""

n = int(input())
lister = []
for i in range(n):
    no = int(input())
    lister.append(no)

def isNotValid(list_1):
    flag = 0    
    for i in range(1, len(list_1)):
        if list_1[i] < list_1[i-1]:
            
    return False

count = 0
while isNotValid(lister):
    for i in range(1, len(lister)):
        if lister[i] <= lister[i-1]:
            lister[i] += 1
    count += 1
print(lister)
print(count)

"""
Sum of Digits of a Number
You are given a number n. You need to find the sum of digits of n.

Input:
The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains one line of input containing n.

Output:
For each testcase, in a newline, print the sum of digits of n.

Your Task:
This is a function problem. You only need to complete the function sumOfDigits that takes n as parameter and returns the sum of digits of n.

Constraints: 
1 <= T <= 105
1 <= n <= 107

Examples:
Input:
2
1
"""

def sumOfDigits(n):
    #base case
    if n < 1:
        return 0
    # recursive case
    else:
        last = n % 10
        return last + sumOfDigits(n//10)

N = int(input("Enter any number: "))
print(sumOfDigits(N))
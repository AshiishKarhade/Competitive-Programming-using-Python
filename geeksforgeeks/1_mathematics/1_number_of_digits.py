"""
Let's say:
N = 2019
Number of digits in N here is 4 and,
the digits are: 2, 0, 1, 9.

Some more Examples:
N = 1567
Number of digits = 4

N = 256
Number of digits = 3

N = 58964
Number of digits = 5
"""
import math

def no_of_digits(no):
    # O(n)
    if no == None:
        return "INVALID"

    count = 0
    while no != 0:
        count += 1
        no = int(no/10)
    return count

def better_no_of_digits(no):
    # we can use mathematics to reduce the time complexity
    # no.of.digits = log(N)+1
    # O(1)
    count = math.floor(math.log10(no) + 1)
    return count 

N = int(input())
print(no_of_digits(N))
print(better_no_of_digits(N))
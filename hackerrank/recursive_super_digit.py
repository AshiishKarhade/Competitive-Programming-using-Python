#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the superDigit function below.
def superDigit(n, k):
    p = int(str(n)*k)
    #print(p)
    return super(p)

def super(num):
    if num <= 9:
        return num
    else:
        #num = p
        sum = 0
        for i in range(int(math.log10(num)+1)):
            sum += num % 10
            num = num // 10
        return super(sum)

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = input().split()

    n = nk[0]

    k = int(nk[1])

    result = superDigit(n, k)

    fptr.write(str(result) + '\n')

    fptr.close()

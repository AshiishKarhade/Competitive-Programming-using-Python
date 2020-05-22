"""
For example:

1. For `arr = [1, 2, 5, 5, 1, 2, 5, 4]` and `target = 5`, `output = 6`

2. For `arr = [1, 2, 5, 5, 1, 2, 5, 4]` and `target = 7`, `output = -1`
"""

def last_index(arr, target):
    return laster_index(arr, target, len(arr)-1)

def laster_index(arr, target, index):
    #print(arr)
    if index < 0:
        return -1
    last = arr[-1]
    if target == last:
        return index
    else:
        laster_index(arr[:-1], target, index-1)
        
last_index([91, 19, 3, 8, 9], 91)
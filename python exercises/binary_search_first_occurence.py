def binary_search(array, target, start=0, end=None):
    if start>=end:
        return -1
    mid = (start+end)//2
    #print(mid)
    if target == array[mid]:
        return mid
    elif target > array[mid]:
        start = mid + 1
    else:
        end = mid
    return binary_search(array, target, start, end)

## BINARY SEARCH - SIMPLE USING RECURSION
print(binary_search([1,2,3,4,5,6], 5, 0, 6))


# TO FIND THE FIRST OCCURENCE OF REPEATED INTS, WE DON'T HAVE TO
# CHANGE IT

def find_first(source, target):
    index = binary_search(source, target, 0, len(source))
    if index is None:
        return None
    while source[index]==target:
        if index == 0:
            return 0
        if source[index-1] == target:
            index -= 1
        else:
            return index

ans = find_first([1,2,3,4,4,5,6,6,6], 6)
print(ans)
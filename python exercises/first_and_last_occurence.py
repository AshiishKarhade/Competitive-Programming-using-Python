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

def first_and_last_index(arr, number):
    """
    Given a sorted array that may have duplicate values, use binary 
    search to find the first and last indexes of a given value.

    Args:
        arr(list): Sorted array (or Python list) that may have duplicate values
        number(int): Value to search for in the array
    Returns:
        a list containing the first and last indexes of the given value
    """
        
    # TODO: Write your first_and_last function here
    # Note that you may want to write helper functions to find the start 
    # index and the end index
       
    idx = binary_search(arr, number, 0, len(arr))
    start_idx = idx
    end_idx = idx
    #print(idx)
    if idx is None:
        return None
    while arr[start_idx] == number:
        if start_idx==0:
            start_idx = 0
            break
        if arr[start_idx-1]==number:
            start_idx -= 1
        else:
            break
    while arr[end_idx] == number:
        if end_idx == len(arr)-1:
            break
        if arr[end_idx+1]==number:
            end_idx += 1
        else:
            break
    return [start_idx, end_idx]
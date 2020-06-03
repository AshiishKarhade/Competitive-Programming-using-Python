# STL Algorithms


* include <algorithm>

1. find(arr, arr+n, key) - returns address
    - to get the index of array, you can subtract the returned value by arr
    - eg. it - arr
    - if element is not present, it returns address of size=n

2. binary_search(arr, arr+n, key) // returns true or false

3. lower_bound(arr, arr+n, key) // returns the address of index of first occurence of the element

4. upper_bound(arr, arr+n, key) // returns the address of next element of index of last occurence of the element

5. sort(arr, arr+n) (or) sort(arr, arr+n, compare)
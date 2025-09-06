# Binary Search
def binarySearch(arr, key):
    l = 0
    r = len(arr) - 1
    while l <= r:
        mid = l + (r - l) // 2  # // is for floor division
        if arr[mid] == key:
            return mid
        elif arr[mid] > key:
            r = mid - 1
        else:
            l = mid + 1
    return -1


arr = [1, 3, 5, 6, 7, 8, 9]

print(binarySearch(arr, 1))

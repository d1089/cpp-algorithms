'''
rotate array in right direction
n = size of array
k = #elements to be rotated
Approaches:
'''



#1. partitioning into subarray and reversing them

t = int(input())
while t!=0:
    n, k = map(int,input().split())
    arr = [int(item) for item in input().split()]
    index = n - (k%n)
    for i in range(index, n):
        print(arr[i], end=' ')
    for i in range(index):
        print(arr[i], end=' ')
    print('\n')
    t -= 1

#2. 


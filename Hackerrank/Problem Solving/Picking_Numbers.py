def pickingNumbers(a):
    a.sort()
    ans = count = 0
    left,r = 0,1
    while left < len(a) and r < len(a):
        if a[left] == a[r] or (a[r] - a[left]) == 1:
            count += 1
        else:
            left = r
            count = 0
        r += 1
        ans = max(ans, count)
    return ans+1
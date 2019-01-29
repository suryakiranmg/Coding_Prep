    #code
testcase=int(input())
for k in range(testcase):
    n=int(input())
    arr=list(map(int,input().split()))
    sum_arr=sum(arr)
    ans = int((n*(n+1))/2) - sum_arr
    print(ans)

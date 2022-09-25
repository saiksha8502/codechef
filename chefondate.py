n=int(input())
for i in range(n):
    money,bill=map(int,input().split())
    if money<bill:
        print("NO")
    else:
        print("YES")
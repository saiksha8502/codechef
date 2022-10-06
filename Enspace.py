n=int(input())
for i in range(n):
    n,x,y=map(int,input().split())
    b=x*1+y*2
    if(b<=n):
        print("YES")
    else:
        print("NO")

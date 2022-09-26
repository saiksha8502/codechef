t=int(input())
for i in range(0,t):
    l=list(map(int,input().split()))
    l.remove(max(l))
    print(max(l))
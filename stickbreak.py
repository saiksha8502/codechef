k=int(input())
for i in range(k):
    a,b=map(int,input().split())
    if a%b==0:
        print(0)
    else:
        print(1)
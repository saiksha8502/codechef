for i in range(int(input())):
    a,b=map(int,input().split())
    print(0 if(a<b) else (a-b))
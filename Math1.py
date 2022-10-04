t = int(input())
for i in range(t):
    x, y = map(int,input().split())
    if y >= x:
        print(int(y) - int(x))
    else:
        print("0")
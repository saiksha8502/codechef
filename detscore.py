n = int(input())
for i in range(n):
    x,y = [int(a) for a in input().split()]
    print(x//10*y)
n = int(input())
for i in range(n):
    a,b = [int(x) for x in input().split()]
    if a > b: print("A")
    else: print("B")
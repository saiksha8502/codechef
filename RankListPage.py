T=int(input())
for i in range(T):
    x=int(input())
    if (x%25 !=0):
        print(int(x/25)+1)
    else:
        print(int(x/25))

T=int(input())
if (1<=T<=1000):
    for tc in range(T):
     X,Y,A=input().split(" ")
     X=int(X)
     Y=int(Y)
     A=int(A)
     if (20<=X<=Y):
         if (X<=Y<=40):
             if (10<=A<=50):
                 if (X<=A<Y):
                     print("YES")
                 else:
                     print("NO")
             
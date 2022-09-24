N=int(input())
cnt=0
for i in range(N):
    for j in range(N):
        sum=0
        sum=i+j 
        if(sum==N):
            cnt+=1 
print(cnt)
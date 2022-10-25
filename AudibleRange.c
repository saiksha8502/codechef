#include <stdio.h>

int main(void) {
    int n,x;
    scanf("%d",&n);
    while(n>0){
        n=n-1;
        scanf("%d",&x);
        if(x>=67&&x<=45000)
            printf("YES\n");
        else
            printf("NO\n");
    }
	// your code goes here
	return 0;
}


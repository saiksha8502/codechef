#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if((a+b+c)==180)
            printf("YES\n");
        else
            printf("NO\n");
    }
	return 0;
}


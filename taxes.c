#include <stdio.h>

int main(void) {
    int n,income;
    scanf("%d",&n);
    while(n>0){
        n=n-1;
        scanf("%d",&income);
        if(income<=100)
            printf("%d\n",income);
        else
            printf("%d\n",income-10);
    }
	// your code goes here
	return 0;
}
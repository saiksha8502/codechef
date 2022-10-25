#include <stdio.h>
#include<string.h>

int main() {
	
	int n;
	char x;
	scanf("%d",&n);
    while(n--)
	{
	    
	    scanf(" %c", &x);
	    if(x =='B' || x =='b')
	        printf("BattleShip\n");
	    else if(x =='C'|| x =='c')
	        printf("Cruiser\n");
	    else if(x =='D'|| x =='d')
	        printf("Destroyer\n");
	    else if(x =='F' || x=='f')
	        printf("Frigate\n");
	}
	return 0;
}
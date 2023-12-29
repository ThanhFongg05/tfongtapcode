#include <stdio.h> 
int main(){
	int t,x,y;
	do{
		printf("Enter x: ");
		scanf("%d",&x);
		printf("Enter y: ");
		scanf("%d",&y);
		t=x;
		x=y;
		y=t;
		printf("Swap Success!!! x = %d, y = %d",x,y);
		break;
	} while(x!=0&&y!=0);
	return(0);
	
}

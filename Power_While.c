#include<stdio.h>
void main(){
	int x,y,i=1,ans=1;
	printf("enter x for base and y for power\n");
	scanf("%d %d",&x,&y);
	
	while(i<=y){
		ans*=x;
		i++;
	}
	printf("x^y=%d",ans);
}

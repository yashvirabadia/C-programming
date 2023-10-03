#include<stdio.h>
void main(){
	 int x,y,i,ans=1;
	 printf("enter x for base and y for its power\n");
	 scanf("%d %d",&x,&y);
	 for(i=1;i<=y;i++){
	 	ans*=x;
	 }
	 printf("x^y = %d",ans);
}


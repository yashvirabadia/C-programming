#include<stdio.h>
void main(){
	 int n,i,ans=1;
	 printf("enter n for its factorial\n");
	 scanf("%d",&n);
	 for(i=1;i<=n;i++){
	 	ans*=i;
	 }
	 printf("factorial of %d = %d",n,ans);
}


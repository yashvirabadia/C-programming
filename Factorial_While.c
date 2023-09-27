#include<stdio.h>
void main(){
	int n,i=1,ans=1;
	printf("enter n for its factorial:\n");
	scanf("%d",&n);
	
	while(i<=n){
		ans*=i;
		i++;
	}
	printf("factorial of %d is = %d",n,ans);
}

#include<stdio.h>
void main(){
	int n,a,sum=0;
	printf("enter a number:\n");
	scanf("%d",&n);
	while(n>0){
		a=n%10;
		sum=sum*10+a;
		n=n/10;
	}
	printf("reverse of given number is %d",sum);
}


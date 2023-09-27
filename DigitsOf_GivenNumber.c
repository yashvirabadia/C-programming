#include<stdio.h>
void main(){
	int n,count=0;
	printf("enter a number:\n");
	scanf("%d",&n);
	while(n>0){
		n=n/10;
		count++;
	}
	printf("digits of given number are %d",count);
}


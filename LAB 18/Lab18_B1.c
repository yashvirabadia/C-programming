#include<stdio.h>

void fib(n){
	int i,c,a=0,b=1;
	for(i=1;i<=n;i++){
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
}
void main(){
	int n;
	printf("Enter n for Nth term of fibonacci series : ");
	scanf("%d",&n);
	fib(n);
}


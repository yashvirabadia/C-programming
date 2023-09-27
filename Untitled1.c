#include<stdio.h>
void main(){
	int n,i=1,count=0;
	printf("enter a number:\n");
	scanf("%d",&n);
	while(i<=n){
		if(n%i==0){
			count++;
		}
	i++;
	}
	if(count==2){
		printf("it is prime number");
	}
	else{
		printf("it's not a prime number");
	}
}


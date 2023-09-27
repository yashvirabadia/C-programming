#include<stdio.h>
void main(){
	int n,a,sum=0,temp;
	printf("enter a number:\n");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		a=n%10;
		sum=sum*10+a;
		n=n/10;
	}
	//printf("%d",sum);
	n=temp;
	if(sum==n){
		printf("it is palindrome number");
	}
	else{
		printf("it is not palindrome number");
	}
}


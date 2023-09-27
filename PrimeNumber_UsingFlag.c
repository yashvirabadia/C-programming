#include<stdio.h>
void main(){
	int n,flag=0,i;
	printf("enter a number:\n");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("number isn't prime");
	}
	else{
		printf("number is prime");
	}
}



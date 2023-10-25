#include<stdio.h>
//void max(int,int);
	
void main(){
	int a,b,max,min;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	max = Max(a,b);
	min = Min(a,b);
	printf("maximum = %d",max);
	printf("\nminimum = %d",min);
}

int Max(int a,int b){
	if(a>b){
	return a;
	}
	else{
	return b;
	}
}
int Min(int a,int b){
	if(a>b){
	return b;
	}
	else{
	return a;
	}
}


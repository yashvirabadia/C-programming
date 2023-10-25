#include<stdio.h>
void add(int,int);

void main(){
	int a,b;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	add(a,b);
	
}

void add(a,b){
	int c;
	c=a+b;
	printf("%d",c);
}

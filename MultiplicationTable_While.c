#include<stdio.h>
void main(){
	int b,i=1;
	printf("enter a number for multiplication table\n");
	scanf("%d",&b);
	
	while(i<=10){
		printf("%d*%d=%d\n",b,i,b*i);
		i++;
	}
}

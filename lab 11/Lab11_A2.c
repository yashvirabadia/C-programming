#include<stdio.h>
void main(){
	 int n,i,sum=0;
	 printf("Enter n to print sum of 1 to n :");
	 scanf("%d",&n);
	 for(i=1;i<=n;i++){
	 	sum+=i;
	 }
	 printf("sum of 1 to %d is %d",n,sum);
}


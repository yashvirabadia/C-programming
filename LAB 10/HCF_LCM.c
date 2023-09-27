#include<stdio.h>
void main(){
	int a,b,i=1,hcf=1;
	printf("enter a :\n");
	scanf("%d",&a);
	printf("enter b :\n");
	scanf("%d",&b);
	while(a>0 && b>0){
		if(a%i==0 && b%i==0){
			hcf*=i;
		}
		i++;
	}
	printf("HCF = %d",hcf);
}


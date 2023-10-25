#include<stdio.h>
float SI(int a,float b, float c){
	float si = (a*b*c)/100.0;
	return si;
}
void main(){
	float si,p,r,n;
	printf("Enter principle,rate and time to find simple interest : ");
	scanf("%f %f %f",&p,&r,&n);
	si=SI(p,r,n);
	printf("Simple interest = %f",si);
}


#include<stdio.h>
float Max(float a,float b,float c){
	if(a>b && a>c){
		return a;
	}
	else if(b>a && b>c){
		return b;
	}
	else if(c>a && c>b){
		return c;
	}
}
void main(){
	float a,b,c,max;
	printf("Enter a: ");
	scanf("%f",&a);
	printf("Enter b: ");
	scanf("%f",&b);
	printf("Enter c: ");
	scanf("%f",&c);
	
	max=Max(a,b,c);
	printf("Maximum = %f",max);

}


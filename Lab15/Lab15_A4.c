#include<stdio.h>
void main(){
	int num[100],i,n,a;
	//float avg,sum=0;
	
	printf("Enter n to store n values: ");
	scanf("%d",&n);
	 
	 for(i=0;i<n;i++){
	 	printf("Enter num%d :\n",i+1);
	 	scanf("%d",&num[i]);
	 }
	 
	 printf("enter a to search an element: ");
	 scanf("%d",&a);
	 
	 if(a>0 && a<=n){
	 	printf("your element has been found\n");
	 	printf("%d",num[a-1]);
	 }
	 else{
	 	printf("NO such element");
	 }
}


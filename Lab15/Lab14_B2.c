#include<stdio.h>
void main(){
	int num[100],i,n;
	float avg,sum=0;
	
	printf("Enter n to store n values: ");
	scanf("%d",&n);
	 
	 for(i=0;i<n;i++){
	 	printf("Enter num%d :\n",i+1);
	 	scanf("%d",&num[i]);
	 	sum+=num[i];
	 }
	 avg=(float)sum/n;
	 printf("average of given numbers is %f",avg);
	 
	 sum=0;
	 for(i=0;i<n;i++){
	 	sum+=(1/num[i]);
	 }
	// float harmonic;
	printf("Harmonic mean = %f",n/sum);
}


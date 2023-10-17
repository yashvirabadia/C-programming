#include<stdio.h>
int main(){
	int num[100],i,n,onum=0;
	//float avg,sum=0;
	
	printf("Enter n to store n negative & positive values: ");
	scanf("%d",&n);
	 
	 for(i=0;i<n;i++){
	 	printf("Enter num%d :\n",i+1);
	 	scanf("%d",&num[i]);
	}
	
	for(i=0;i<n;i++){
		if(num[i]%3==0){
			onum++;
		}
	
	}
	
	printf("count of numbers divisible by 3 is = %d",onum);
	
	return 0;
}

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
		if(num[i]<0){
			onum++;
		}
	
	}
	
	printf("negative numbers = %d",onum);
	
	return 0;
}

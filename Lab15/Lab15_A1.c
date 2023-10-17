#include<stdio.h>
int main(){
	int a[100],b[100],n,i;
	
	printf("Enter n for : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("enter a%d: ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		b[i]=a[i];
	}
	for(i=0;i<n;i++){
	
	printf("b%d = %d\n",i+1,b[i]);
	}
	
	return 0;
}


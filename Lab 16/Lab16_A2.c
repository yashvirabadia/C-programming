#include<stdio.h>
void main(){
		int i,j,n1,n2;
	
	printf("Enter rows : ");
	scanf("%d",&n1);
	printf("Entercolumns : ");
	scanf("%d",&n2);
	
	int a[n1][n2];
	
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			printf("[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	int pnum=0,nnum=0,zero=0;
		for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
		if(a[i][j]>0){
			pnum++;
		}
		else if(a[i][j]<0){
			nnum++;
		}
		else if(a[i][j]==0){
			zero++;
		}
		}
	}
	
	printf("positive numbers = %d",pnum);
	printf("negetive numbers = %d",nnum);
	printf("zero = %d",zero);
	
	
}


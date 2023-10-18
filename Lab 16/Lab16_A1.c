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
		//printf("\n");
	}
		for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			printf("%d ",a[i][j]);
		//	scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
}


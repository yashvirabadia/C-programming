#include<stdio.h>
void main(){
	int i,j,n1,n2;
	
	printf("Sum of two matrices\n");
	
	printf("Enter rows : ");
	scanf("%d",&n1);
	printf("Entercolumns : ");
	scanf("%d",&n2);
	
	int a[n1][n2],b[n1][n2],c[n1][n2];
	
	printf("\nEnter matrix 1\n");
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			printf("[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}	
	printf("\nEnter matrix 2  \n");
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
			printf("[%d][%d] = ",i,j);
			scanf("%d ",&b[i][j]);
		}
	}	
	
	printf("Sum of given two matrices is :\n");
	for(i=0;i<n1;i++){
		for(j=0;j<n2;j++){
		c[i][j]=a[i][j]+b[i][j];
		printf("%d",c[i][j]);
		}
		printf("\n");
	}	
	
	
}


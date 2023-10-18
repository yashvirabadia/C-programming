#include<stdio.h>
void main(){
	int i,j,a[20][2];
	
	
	for(i=0;i<20;i++){
		for(j=0;j<2;j++){
		 if(j==0){
		 printf("Enter student %d's roll no. :",i+1);
		 scanf("%d",&a[i][j]);
		}
		else{
		 printf("Enter marks : ");
		 scanf("%d",&a[i][j]);
		}
		}
	}
	
		for(i=0;i<20;i++){
		for(j=0;j<2;j++){
			printf("%d ",a[i][j]);
		//	scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
}


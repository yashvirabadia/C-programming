#include<stdio.h>
void main(){
	int i,j;
	
	//printf("Enter n: ");
	//scanf("%d",&n);
	
	for(i=1;i<=4;i++){
		for(j=1;j<=4-i;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
		 if(j==1 || j==i){
		 printf("* ");
		 }
		 else{
		 	printf("  ");
		 }
		// printf("\n");
	}
	printf("\n");
	//	printf(\n);
	}
	
	
}


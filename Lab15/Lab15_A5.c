#include<stdio.h>
#include<stdlib.h>
void main(){
	char a[100];
	int i,count=0;
	printf("Enter a string\n");
	gets(a);
	
	for(i=0;a[i]!='\0';i++){
		count++;
	}
	
	printf("lenght of your string = %d",count);
}


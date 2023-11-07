#include<stdio.h>
#include<string.h>
void main(){
	char s1[30],s2[30];
	printf("Enter string 1 : ");
	gets(s1);
	printf("Enter string 2 : ");
	gets(s2);
	
	printf("%d\n",strlen(s1));
	printf("%d\n",strcmp(s1,s2));
	printf("%s\n",strcpy(s1,s2));
	printf("%s",strcat(s1,s2));
}

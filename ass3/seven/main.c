//the length of string manually

#include <stdio.h>

void main(){

	char st[100];
	printf("Enter a String: ");
	fflush(stdout);fflush(stdin);
	gets(st);
	for(int i=0;st[i]!='\n';i++);
	printf("%d",i);
	
}

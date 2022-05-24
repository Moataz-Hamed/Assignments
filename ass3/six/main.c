
//find the frequency of a character in a string

#include <stdio.h>

void main(){

	char st[100],c;
	int a=0,i;
	printf("Enter a String: ");
	fflush(stdout);fflush(stdin);
	gets(st);
	printf("Enter the character: ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&c);
	for(i=0;i<strlen(st);i++){
		if(c==tolower(st[i])){
			a=a+1;
			continue;
		}
	}
	printf("%d",a);
}

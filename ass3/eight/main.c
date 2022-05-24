
//reverse string manually


#include <stdio.h>

void main(){

	char st[100];
	int i;
	printf("Enter a String: ");
	fflush(stdout);fflush(stdin);
	gets(st);
	for(i=strlen(st)-1;i>=0;i--){
		printf("%c",st[i]);
		}


}

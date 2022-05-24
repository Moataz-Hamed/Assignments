//program to checkk whether a character is an alphabet or not

#include <stdio.h>

int main() {
	char a;
	int b;
	printf("Enter a character");
	fflush(stdout);fflush(stdin);
	scanf("%c",&a);
	b=a;
	if(65<=b && b<=90 || 97<=b && 	b<=122){
		printf("%c is a character",a);
	}else{
		printf("%c not a character",a);
	}

	return 0;
}

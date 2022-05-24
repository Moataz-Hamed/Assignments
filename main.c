
//factorial using recursion

#include <stdio.h>

void rec(char arr2[],int a);

int main () {

	char arr[50];
	int a;
	printf("Enter a sentence: ");
	fflush(stdout);fflush(stdin);
	gets(arr);
	a=strlen(arr);
	for (int i=0;i<a;i++){
		printf("%c",arr[i]);
	}
	printf("\nReverse is: ");
	rec(arr,a);
	return 0;
}

void rec(char arr2[],int a){
	if(a>=0){
	printf("%c",arr2[a]);
	rec(arr2,--a);
}
}

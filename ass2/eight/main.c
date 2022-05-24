//simple calculator program

#include <stdio.h>

void main() {

	float a,b;
	char c;
	float res;
	printf("Enter operator: ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&c);
	printf("Enter two numbers");
	fflush(stdout);fflush(stdin);
	scanf("%f %f",&a,&b);
	switch (c){
		case'-':
			res=a-b;
			break;
		case'+':
			res=a+b;
			break;
		case'*':
			res=a*b;
			break;
		case'/':
			res=a/b;
			break;
		default:
			printf("not a valid operator");
			break;
	}

	printf("%f",res);
}

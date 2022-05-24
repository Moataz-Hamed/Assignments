//Write C Program to Add Two Integers


#include "stdio.h"

int main() {
	int a,b;
	printf("Enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&a,&b);
	printf("Sum: %d",a+b);

	return 0;
}

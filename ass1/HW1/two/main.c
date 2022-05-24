//Write C Program to Print a Integer Entered by a User


#include "stdio.h"

int main() {

	int a;
	printf("Enter a integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	printf("You entered: %d",a);
	return 0;

}

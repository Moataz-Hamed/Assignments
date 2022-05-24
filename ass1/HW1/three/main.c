/*
 * main.c
 *
 *  Created on: Mar 26, 2022
 *      Author: Moataz
 */

#include "stdio.h"

int main() {
	int a,b;
	printf("Enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&a,&b);
	printf("Sum: %d",a+b);

	return 0;
}

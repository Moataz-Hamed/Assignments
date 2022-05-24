/*
 * main.c
 *
 *  Created on: Mar 26, 2022
 *      Author: Moataz
 */

#include "stdio.h"

int main() {
	float a,b;
	printf("Enter two floats: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&a,&b);
	printf("Sum: %f",a*b);

	return 0;
}

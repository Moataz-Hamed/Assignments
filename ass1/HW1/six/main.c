/*
 * main.c
 *
 *  Created on: Mar 26, 2022
 *      Author: Moataz
 */
//Write Source Code to Swap Two Numbers

#include "stdio.h"

int main() {

	float a,b,c;
	printf("Enter value of a: \r\nEnter value of b:");
	printf(" ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("After swapping, value of a = %f",a);
	printf("After swapping, value of b = %f",b);



	return 0;
}


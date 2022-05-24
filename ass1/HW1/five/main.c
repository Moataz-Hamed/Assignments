/*
 * main.c
 *
 *  Created on: Mar 26, 2022
 *      Author: Moataz
 */
//Write C Program to Find ASCII Value of a Character

#include "stdio.h"

int main() {
	char a;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&a);
	printf("ASCII value of %c =  %d",a,a);

	return 0;
}

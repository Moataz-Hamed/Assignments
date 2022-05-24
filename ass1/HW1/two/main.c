/*
 * main.c
 *
 *  Created on: Mar 25, 2022
 *      Author: Moataz
 */

#include "stdio.h"

int main() {

	int a;
	printf("Enter a integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	printf("You entered: %d",a);
	return 0;

}

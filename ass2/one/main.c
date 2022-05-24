/*
 * main.c
 *
 *  Created on: Mar 27, 2022
 *      Author: Moataz
 */

#include "stdio.h"

int main () {

	int a;
	printf("Please Insert the number");
	fflush(stdin); fflush(stdout);
	scanf("%d",&a);
	if (a%2==0){
		printf("%d Is an even number",a);
	}else{
		printf("%d Is an odd number",a);
	}





	return 0;
}



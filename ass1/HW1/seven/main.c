/*
 * main.c
 *
 *  Created on: Mar 26, 2022
 *      Author: Moataz
 */


/*
 * main.c
 *
 *  Created on: Mar 26, 2022
 *      Author: Moataz
 */
#include "stdio.h"

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float a,b;
	printf("Enter value of a: \r\nEnter value of b:");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&a,&b);
	printf("%f %f",a ,b);
	b=a+b;
	a=b-a;
	b=b-a;

	printf("After swapping, value of a = %f\n",a);
	printf("After swapping, value of b = %f\n",b);
	return 0;
}


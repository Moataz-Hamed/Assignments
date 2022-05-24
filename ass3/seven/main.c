/*
 * main.c
 *
 *  Created on: May 23, 2022
 *      Author: Moataz
 */


#include <stdio.h>

void main(){

	char st[100];
	printf("Enter a String: ");
	fflush(stdout);fflush(stdin);
	gets(st);
	printf("%d",strlen(st));
}

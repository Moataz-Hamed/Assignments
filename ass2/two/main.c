/*
 * main.c
 *
 *  Created on: Mar 27, 2022
 *      Author: Moataz
 */

#include "stdio.h"

int main () {

	char a;
	printf("Please Enter the Character");
	fflush(stdin); fflush(stdout);
	scanf("%c",&a);
	char b=tolower(a);
	if ((b=='i') || (b=='o') || (b=='u') || (b=='a') || (b=='e')){
		printf("%c Is a Vowel",a);
	}else{
		printf("%c Is a consonant",a);
	}





	return 0;
}



/*
 * main.c
 *
 *  Created on: Mar 30, 2022
 *      Author: Moataz
 */

#include "stdio.h"

int main() {

	int i,num;
	float aver,one,sum;

	printf("Enter the Maximum Number of input ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	for(i=0;i<num;i++){
		printf("Enter the %d number",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&one);
		if(one==0){
			i--;
			break;}
		sum+=one;
	}
	aver=sum/++i;
	printf("The Average numbrt is %f",aver);
	return 0;
}

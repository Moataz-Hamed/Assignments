/*
 * main.c
 *
 *  Created on: Mar 30, 2022
 *      Author: Moataz
 */
/*
 * main.c
 *
 *  Created on: Mar 30, 2022
 *      Author: Moataz
 */

#include "stdio.h"

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	float array1[2][2];
	float array2[2][2];
	float array3[2][2];
	int i ,j;

	printf("Enter the elements if the first matrix \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter Element a%d%d",i+1,j+1);
			scanf("%f",&array1[i][j]);
			fflush(stdin);fflush(stdout);
		}
	}

	printf("Enter the elements if the second matrix \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter Element a%d%d",i+1,j+1);
			scanf("%f",&array2[i][j]);
			fflush(stdin);fflush(stdout);
		}
	}

	for(i=0;i<2;i++){
			for(j=0;j<2;j++){
				array3[i][j]=array1[i][j]+array2[i][j];
			}
	}
	for(i=0;i<2;i++){
				for(j=0;j<2;j++){
					printf("The sum is %f",array3[i][j]);
				}
		}


	return 0;
}




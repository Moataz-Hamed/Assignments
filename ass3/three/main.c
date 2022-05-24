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

		int i ,j;
		int rows,cols;
		printf("Enter the Maximum Number of rows ");
			fflush(stdin); fflush(stdout);
			scanf("%d",&rows);
			printf("Enter the Maximum Number of Columns ");
				fflush(stdin); fflush(stdout);
				scanf("%d",&cols);
				int array[rows][cols];
					int arr2[cols][rows];
		printf("Enter the elements if the first matrix \n");
		for(i=0;i<rows;i++){
			for(j=0;j<cols;j++){
				printf("Enter Element a%d%d",i+1,j+1);
				fflush(stdin);fflush(stdout);
				scanf("%d",&array[i][j]);
			}
		}

		for(i=0;i<rows;i++){
			for (j=0;j<cols;j++){
				arr2[j][i]=array[i][j];
			}
		}
		for(i=0;i<rows;i++){
					for (j=0;j<cols;j++){
						printf("%d ",array[i][j]);
						if(j==cols-1){
							printf("\n");
						}
					}
				}

		for(i=0;i<cols;i++){
					for (j=0;j<rows;j++){
						printf("%d ",arr2[i][j]);
						if(j==rows-1){
							printf("\n");
						}
					}
				}

	return 0;
}

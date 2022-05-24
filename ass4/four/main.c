// get the power of a number using recursion

#include <stdio.h>

int exp(int a ,int b);

void main(){

	int b,p,res;
	printf("Enter the base number: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&b);
	printf("\nEnter  Power number: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&p);

	res= exp(b,p);
	printf("\nresult is: %d",res);

}

int exp(int a,int b){
	if(b!=0){

		return (a*exp(a,b-1));
	}
	else
		return 1;


}

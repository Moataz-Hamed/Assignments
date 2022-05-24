//program to calculate the sum of natural numbers

#include <stdio.h>

void main() {

	int a,res=0;
	printf("Enter the Number: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&a);
	for(int i=a;i!=0;i--){
		res+=i;
	}
	printf("%d",res);
}

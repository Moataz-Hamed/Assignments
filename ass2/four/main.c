//program checking whethter a number is positive or negative

#include <stdio.h>

int main() {

	int a;
	printf("Enter the number");
	fflush(stdout);fflush(stdin);
	scanf("%d",&a);
	if(a>0){
		printf("Positive");
	}else if(a<0){
		printf("Negative");
	}else{
		printf("Zero");
	}



	return 0;
}

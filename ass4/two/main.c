


// Calculate the factorial of a number

#include <stdio.h>

int recursive(int num);
int main() {

	int a;
	printf("Enter the number \n");
	fflush(stdout); fflush(stdin);
	scanf("%d",&a);
	int result;
	result = recursive(a);
	printf("%d",result);
	return 0;
}

int recursive(int num){
	if(num!=1)
		return num*recursive(num-1);
}

//programe to calculate the factorial of a number

#include <stdio.h>

void main() {

	int a,res=1;
	printf("Enter the Number: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&a);
	if(a<0){
		printf("Factorial of a negative number does not exist");
	}else{
	for(int i=a;i!=0;i--){
		res*=i;
	}
	}
	printf("%d",res);
}

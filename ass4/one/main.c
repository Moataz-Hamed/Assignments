#include <stdio.h>
int checkPrime(int num);
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int a,b,i,check;
	printf("Enter the numbers :\n");
	fflush(stdout);fflush(stdin);
	scanf("%d %d", &a,&b);
	for(i=a+1;i<b;i++){
		check=checkPrime(i);
		if(check==0){
			printf("%d ",i);
		}
	}
	return 0;
}

int checkPrime(int num){
	int j,check=0;
	for(j=2;j<=num/2;j++){
		if(num%j==0){
			check=1;
			break;
		}else{
			check=0;
			continue;
		}
	}
	return check;
}

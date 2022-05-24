//program to find the largest number among 3 numbers


#include"stdio.h"

void main (){
		float a,b,c;
		printf("Enter three numbers");
		fflush(stdout);fflush(stdin);
		scanf("%f %f %f",&a ,&b,&c);
		if(a>b){
			if(a>c){
				printf("%f is the biggest",a);
			}else if(a<c){
				printf("%f is the biggest",c);
			}
		}else{
			if(b>c){
				printf("%f is the biggest",b);
			}else if(b<c){
				printf("%f is the biggest",c);
			}
		}

}

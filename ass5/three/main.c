#include <stdio.h>

struct num{
	double real;
	double img;
};

void add(struct num a,struct num b){
	struct num c;
	c.real=a.real+b.real;
	c.img=a.img+b.img;

	printf("%.1lf %.1lfi",c.real,c.img);
}


void main(){
	struct num a,b;
	printf("For first complex number: ");
	printf("\nEnter real and imaginary respecteviely: ");
	fflush(stdout);fflush(stdin);
	scanf("%lf",&a.real);
	scanf("%lf",&a.img);
	printf("for second complex number: ");
	printf("\nEnter real and imaginary respecteviely: ");
	fflush(stdout);fflush(stdin);
	scanf("%lf",&b.real);
	scanf("%lf",&b.img);
	add(a,b);
//	printf("Sum=%f+%fi",c.real,c.img);




}

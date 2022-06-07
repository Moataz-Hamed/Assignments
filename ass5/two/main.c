#include <stdio.h>

struct distance{
	int feet;
	double inch;
};

void summ(struct distance a,struct distance b){
	struct distance c;
	c.feet=a.feet+b.feet;
	c.inch=a.inch+b.inch;
	if(c.inch>12){
		c.feet++;
		c.inch=c.inch-12;
	}

	printf("Sum of distances= %d\' %.1lf\"",c.feet,c.inch);
}


void main(){
	struct distance d,d2;
	printf("Enter The first distance: ");
	printf("\nEnter feet: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&d.feet);
	printf("\nEnter Inch: ");
	fflush(stdout);fflush(stdin);
	scanf("%lf",&d.inch);

	printf("Enter The second distance: ");
	printf("\nEnter feet: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&d2.feet);
	printf("\nEnter Inch: ");
	fflush(stdout);fflush(stdin);
	scanf("%lf",&d2.inch);
	summ(d,d2);



}

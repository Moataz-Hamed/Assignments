#include <stdio.h>

void main(void){

	int m=29;
	printf("Address of m : 0x%d\n",&m);
	printf("Value of m : %d\n",m);
    int * ab = &m;
    printf("Address of ab : 0x%d\n",ab);
	printf("Value of ab : %d\n",* ab);
    m=34;
    printf("Address of ab : 0x%d\n",ab);
	printf("Value of ab : %d\n",* ab);
    *ab=7;
    printf("Address of m : 0x%d\n",&m);
	printf("Value of m : %d\n",m);
}

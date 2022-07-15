#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,ar[15];
    int *ptr;
    printf("ENTER the number of ELEMENTS: ");
    scanf("%d",&a);
    for(b=0;b<a;b++){
        printf("\nENTER THE ELEMENT NUMBER %d: ",b);
        scanf("%d",&ar[b]);
    }

ptr=&ar[a-1];

for(int i=a; i>0;i--){
    printf("%d",*ptr);
    ptr--;
}



}

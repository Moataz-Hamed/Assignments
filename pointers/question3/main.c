#include <stdio.h>
#include <stdlib.h>

int main()
{

    char st[50];
    char a;
    printf("ENTER A STRING: \n");
    gets(st);

    char *ptr=st;
    char *ptr2=st;
    int i=strlen(st);

    for(int j=0;j<i-1;j++)
        ptr2++;
    for (int j = 0; j < i / 2; j++) {
         a = *ptr2;
        *ptr2 = *ptr;
        *ptr = a;
         ptr++;
        ptr2--;
    }
    printf("%s",st);
}

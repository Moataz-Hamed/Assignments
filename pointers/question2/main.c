#include <stdio.h>
#include <stdlib.h>

int main()
{
    char val='A';
    char * ptr=&val;
    for(int a=1;val<='Z';a++){
        printf("%c ",(*ptr)++);
    }

    return 0;
}

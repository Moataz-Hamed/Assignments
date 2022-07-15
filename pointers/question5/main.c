#include <stdio.h>
#include <stdlib.h>

struct student{
    int id;
    char name[20];
    int degree;
};
int main()
{
    struct student one={1,"ahmed",90};
    struct student two={2,"Ali",80};
    struct student three={3,"mai",95};
    struct student (*arr[])={&one,&two,&three};
    struct student (*(*ptr)[3])=&arr;
    printf("\nstudent name: %s",(**(*ptr+1)).name );
    printf("\nstudent id: %d",(**(*ptr+1)).id );
    printf("\nstudent degree: %d",(**(*ptr+1)).degree );

    return 0;
}

#include <stdio.h>


struct SstudentData{
	char name[50];
	int roll;
	float marks;
}student;




void main(){
	char a[50];
	struct SstudentData s;
	printf("Enter Student Data\n");
	printf("Enter student name: ");
	fflush(stdout);fflush(stdin);
	gets(&a);
	strcpy(s.name,a);
//	printf("Name is %s",s.name);
	printf("\nEnter Student roll: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&s.roll);
	printf("\nEnter Student Marks: ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&s.marks);

	printf("\nStudent Name is:%s\nStudent Roll is:%d\nStudent Marks is:%f",s.name,s.roll,s.marks);


}

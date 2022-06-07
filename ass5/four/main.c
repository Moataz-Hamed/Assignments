#include <stdio.h>


struct SstudentData{
	char name[50];
	int roll;
	float marks;
}student;




void main(){
	struct SstudentData s[10];
	for(int i=0;i<10;i++){
	printf("Data for student number %d\n",i+1);
	printf("Enter name: ");
	fflush(stdout);fflush(stdin);
	gets(&s[i].name);
	printf("\nEnter Student roll: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&s[i].roll);
	printf("\nEnter Student Marks: ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&s[i].marks);
	}
	for(int j=0;j<10;j++)
	printf("\nStudent Name is:%s\nStudent Roll is:%d\nStudent Marks is:%.1f\n",s[j].name,s[j].roll,s[j].marks);


}

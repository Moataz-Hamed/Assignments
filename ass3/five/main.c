#include <stdio.h>

void main(){

	int a,i,arr[10],b,loc;
	printf("Enter number of elementes: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&a);
	for(i=0;i<a;i++){
		printf("Enter the %d element",i+1);
		fflush(stdout);fflush(stdin);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++){
		printf("%d ",arr[i]);
	}

	printf("\n Enter the number to be searched: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&b);

	for(i=0;i<a;i++){
		if(b==arr[i]){
			loc=i+1;
			break;
		}else{
			loc=0;
			continue;
		}
	}

	if(loc!=0){
		printf("Number found in location %d in the list",loc);

	}else{
		printf("Number not found in the list");
	}

}

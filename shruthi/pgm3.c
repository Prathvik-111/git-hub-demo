#include<stdio.h>
#include<string.h>
struct student
{
	int rollno;
	char name[10];
	char branch[10];
};
int main()
{
	struct student s1;
	printf("Enter Rollno\n");
	scanf("%d",&s1.rollno);
	printf("Enter name \n");
	scanf("%s",s1.name);
	
	printf("Enter Branch\n");
	scanf("%s",s1.branch);  
	printf("Rollno %d \n Name %s\n Branch %s\n ",s1.rollno,s1.name,s1.branch);
	
	return 0;
}

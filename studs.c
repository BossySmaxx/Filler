#include<stdio.h>
struct student
{
int rollno;
char name[10];
int age;
char address[30];
int marks[5];
};
void main()
{
	struct student stu[15];
	int i,j,count=1;
	char ans;
	printf("WELCOME to Students DATABASE of\n");
	system("figlet IICS\n");
	printf(" ______________________________________\n");
	printf("|___________STUDENT_DETAILS____________|\n");
	for(i=0;i<15;i++)
	{
	printf("+ + + + + + + + + +\n");
	printf("+   STUDENT:%d     +\n",i+1);
	printf("+ + + + + + + + + +\n");
	printf("Roll-No:____");
	scanf("%d",&stu[i].rollno);
	printf("\nName(No_Spaces and 5-10 characters Acceptable):_____");
	scanf("%s",&stu[i].name);
	printf("\nAge:___");
	scanf("%d",&stu[i].age);
	printf("\nAddress(No_Spaces and 7-15 characters are not acceptable):____");
	scanf("\n%s",&stu[i].address);
		for(j=0;j<5;j++)
		{
		printf("\nMarks[%d]:___",j+1);
		scanf("%d",&stu[i].marks[j]);
		}
	printf("Do you want to Stop Entering Records, press 'Y' if YES OR almost any key to continue your Fucking Job\n");
	scanf("%s",&ans);
	if(ans=='y' || ans=='Y')
		{
		    break;
		}
	count++;
	}

	printf(" _______________________________________________________________________________________\n");
	printf("|______________________________________STUDENTS_DETAILS_________________________________|\n");
	printf("ROLL-NO\t|NAME\t\t|AGE\t|ADDRESS\t|SCIENCE|MATHS|PHYSICS|CHEMISTRY|BIOLOGY|\n");

	for(i=0;i<count;i++)
	{
	printf("|%d\t|%s\t\t|%d\t|%s\t",stu[i].rollno,stu[i].name,stu[i].age,stu[i].address);
		for(j=0;j<5;j++)
		{
		printf("|%d\t",stu[i].marks[j]);

		}
	printf("|\n");
	}



	/*for(j=0;j<5;j++)
	{
	printf("",);
	}*/
}
 

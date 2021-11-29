#include<stdio.h>
#include<stdlib.h>


int grader(int marks)
{
char grade;
if(marks<40)
{
grade = 'F';
}

else if(marks<50)
{
    grade = 'D';
}
else if(marks<60)
{
    grade = 'C';
}
else if(marks<70)
{
    grade = 'B';
}
else if(marks<100)
{
    grade = 'A';
}
else
{
   printf("\n Out of range:");
}
return grade;

}
void main()
{
    char Grade;
    int marks;
    char courseName[10];


    //user input


    for (int i=1;i<=7;i++)
    {
        printf("\n Enter your course %d name:\n",i);
        scanf("%s",courseName);
        printf("\n Enter your marks:\n");
        scanf("%d",&marks);
        Grade=grader(marks);
        printf("\n Your grade is an %c:",Grade);
    }
}//end main

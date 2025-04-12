#include<stdio.h>
#include<string>
struct student
{
    int rollno;
    char name[20];
    float marks;
};
char calcu(float marks)
{
	if(marks>=90) return'A';
    else if(marks>=80) return'B';
    else if(marks>=70) return'c';
    else if(marks>=60) return'D';
    else if(marks>=50) return'E';
    else return'F'
}
int main()
{
    struct student students[10];
    int n ,i;
    printf("enter the number of the students (max 10):- ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("\n Enter ditails of student %d\n",i+1);
        printf("enter the roll no:- ");
        scanf("%d",&students[i].rollno);
        printf("name :-");
        scanf("%s", students[i].name);
        printf("marks:- ");
        scanf("%f",&students[i].marks);
    }

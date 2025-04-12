<<<<<<< HEAD
#include<stdio.h>
#include<string>
=======
i#include<stdio.h>
#include<string.h>
>>>>>>> harsha
struct student
{
    int rollno;
    char name[20];
    float marks;
};
char calcu(float marks)
{
<<<<<<< HEAD
	if(marks>=90) return'A';
=======
    if(marks>=90) return'A';
>>>>>>> harsha
    else if(marks>=80) return'B';
    else if(marks>=70) return'c';
    else if(marks>=60) return'D';
    else if(marks>=50) return'E';
<<<<<<< HEAD
    else return'F'
=======
    else return'F';
>>>>>>> harsha
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
     printf("\nStudent Details:\n");
    printf("Roll No\tName\t\tMarks\tGrade\n");
    printf("-------------------------------------\n");
    for (i = 0; i < n; i++)
     {
        printf("%d\t %s\t \t%.2f \t%c\n", students[i].rollno, students[i].name, students[i].marks, calcu(students[i].marks));
    }
    return 0;
}

<<<<<<< HEAD
=======

>>>>>>> harsha

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


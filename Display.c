#include"declaration.h"

void Display(struct student *ptr)
{

if(ptr==NULL)
{
printf("list is empty\n");

}

while(ptr!=NULL)
{

printf("\n\nName of student--> %s", ptr->name);
printf("\n Roll Number of Student-->%d",ptr->roll_no);
ptr=ptr->next;
}

}

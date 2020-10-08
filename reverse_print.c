#include"declaration.h"

void Reverse_print(struct student *lptr )
{



while(lptr)
{

printf("\n\nName of student--> %s", lptr->name);
printf("\n Roll Number of Student-->%d",lptr->roll_no);

lptr=lptr->prev;

}
return;

}


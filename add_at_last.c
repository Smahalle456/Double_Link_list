#include"declaration.h"

void Add_at_last(struct student **ptr , struct student **lptr)
{
struct student *nu=NULL;

nu=calloc(1,sizeof(struct student));

if(nu==NULL)
{
printf("NOde not created\n");

}

printf("\n\n Enter the data of Stuent \n\n");

printf("Enter the name of student-->");
scanf("%s",nu->name);

printf("Enter the Roll number of student-->");
scanf("%d",&nu->roll_no);

if(*ptr==NULL)
{
*ptr=nu;
printf("\n List was empty & first node is added to list\n\n");

}
else{
(*lptr)->next=nu;
}

nu->prev=*lptr;
*lptr=nu;


}

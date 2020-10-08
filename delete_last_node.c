#include"declaration.h"

void delete_last_node(struct student **ptr, struct student **lptr)
{
struct student *temp=NULL;

if(*lptr==NULL)
{
printf("\nList is empty\n");
return;
}
else
{
temp=*lptr;
(*lptr)=(*lptr)->prev;
(*lptr)->next=NULL;
free(temp);
return;
}

}

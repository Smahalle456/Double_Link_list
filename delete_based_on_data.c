#include"declaration.h"


void delete_based_on_data(struct student **ptr, struct student **lptr)
{
int data=0;
struct student *temp;

printf("\n Enter the Data That you want to delete\n");
scanf("%d", &data);



if((*ptr)->roll_no == data)
{
Delete_first_node(ptr,lptr);
return;
}

else if((*lptr)->roll_no ==data)
{
delete_last_node(ptr,lptr);
return;
}

else{
temp=(*ptr)->next;

while(temp && temp->roll_no != data)
temp=temp->next;

if(temp==NULL)
{
printf("\n Roll No Not found\n\n");
}
else
{
temp->prev->next=temp->next;
temp->next->prev=temp->prev;

free(temp);
temp= NULL;

return;
}
}
}

#include"declaration.h"

void Delete_first_node(struct student **ptr, struct student **lptr)
{

struct student *temp;
temp=(*ptr);
if(*ptr== NULL)
{
printf("List is empty\n");
return;
}


*ptr=(*ptr)->next;
(*ptr)->prev=NULL;

free(temp);

return;


}

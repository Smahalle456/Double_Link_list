#include"declaration.h"


int main()
{
struct student *head=NULL,*tail=NULL;
int choice;

while(1)
{
printf("\nEnter your choice\n");

printf("\n*********************MENU**************\n\n");
printf("\n 1-Display\n 2-Add_at_first\n 3-Add_at_last\n 4-Delete_first_node\n 5-Delete_last_node\n 6-Reverse_print\n 7-Delete_based_on_data\n\n");

scanf("%d",&choice);


switch(choice)
{
case 1:Display(head);
	break;
case 2:Add_at_first(&head,&tail);
       break;

case 3:Add_at_last(&head,&tail);
	break;

case 4:Delete_first_node(&head,&tail);
	break;

case 5:delete_last_node(&head,&tail);
	break;
case 6:Reverse_print(tail);
	break;
case 7:delete_based_on_data(&head,&tail);
	break;

default: printf("Please enter the valid input\n\n");


}
}
}

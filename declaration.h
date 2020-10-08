#include<stdio.h>
#include<stdlib.h>

struct student{

char name[20];
int roll_no;
struct student *prev,*next;

};

void Display(struct student *ptr);
void Add_at_first(struct student**, struct student**);
void Add_at_last(struct student **ptr , struct student **lptr);
void Delete_first_node(struct student **ptr, struct student **lptr);
void delete_last_node(struct student **ptr, struct student **lptr);
void Reverse_print(struct student *lptr );
void delete_based_on_data(struct student **ptr, struct student **lptr);

//***************************IMPLEMENT CIRCULAR SINGLY LINKLIST  ******************************** */

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *head=NULL;

void addatbegin(){
    int num;
    printf("\nenter the data insert at begin :-");
    scanf("%d",&num);
    struct node *p,*temp;
    temp=(struct node *)malloc(sizeof(struct node));
    p=head;
    while (head==NULL)
    {
        temp->data=num;
        temp->next=temp;
        head=temp;
    }
    while (p->next!=head)
    {
        p=p->next;
        temp->data=num;
        temp->next=head;
        p->next=temp;
        head=temp;
    }   

}

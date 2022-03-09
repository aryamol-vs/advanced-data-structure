#include<stdio.h>
#include<stdlib.h>
struct node
{

    int data;
    struct node *next;

};
struct node *n,*ptr,*top *head;
n=(struct node*)malloc(sizeof(struct node));
printf("menu\n");
printf("\n\t 1.push operation\n\t 2.pop operation\n\t 3.display\n\t");
void push(int d)
{

if(top>=n-1)
   {
      print("stack is  0verflow\n");
        n->data=d;
        n->next=null;
   }
   else
   {
      top->data=d;
      d=top;
      ptr->head=data;
      top=data;
      next->top=data;
      ptr=top;
   }
}
void pop( int t)
{
    struct node *item,*t
    t=top;
    if(top<=0)
    {
         ptr->head=null;
        print(" stack is underflow\n");
    }
    else
        {
       ptr->head=data;
       next->top=ptr;
       top->t=item;
       free(t);


    }
    void display()
    {
        printf("the elements is\n")

    }









}

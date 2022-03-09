#include<stdio.h>
#include<stdlib.h>
int stack[100],top,x,i,n,ch;
void push(void);
void pop(void);
void display(void);
void main()
{
printf("enter the size of the stack\n");
scanf("%d",&n);
printf("enter the operations of the stack");
printf("\n\t1.push\n\t 2.pop\n\t 3.display\n\t 4.exit\n\t");
printf("enter your choice\n");
scanf("%d",&ch);

switch(ch)
{
case 1:
push();
break;
case 2:

        pop();
        break;
case 3:

        display();
        break;
case 4:

     exit(0);
        break;


default:


        printf("enter a valid choice\n");
    while(ch!=0)
        return 0;

}
}
void push()
{

    if(top>=-1)
    {

        printf("tack is overflow\n");

    }
    else
        {
        printf("enter the data to be pushed\n");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{

    if(top>=-1)
    {

        printf("stack is underflow\n");

    }
    else
        {
       printf(" entetr data to be poped",stack[top]);
    top--;

    }


}
void display()
{

    if(top>=0)
    {
        printf("the stack is",stack[top]);
        for(i=top;i>=0;i--)
        {
           printf("the elements of a stack is",stack[i]);

        }
    }


getch();
}




//let us c 9th sum
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
struct node *top=0,*new_node;

int main()
{
    push(45);
    push(28);
    push(63);
    display();
    peek();
    pop();
    peek();
    display();
}
void push(int x)
{

   new_node=(struct node*)malloc(sizeof(struct node));
   new_node->data=x;
   new_node->link=top;
   top=new_node;
}
void display()
{
    struct node *temp;
    temp=top;
    if(top==NULL)
    {
       printf("enter value first\n");

    }
    else{
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->link;
        }
    }
}
void peek()
{
    if(top==NULL)
    {
        printf("empty\n");
    }
    else
        printf("top element is %d\n",top->data);

}
void pop()
{
    struct node *temp;
    temp=top;
    if(top==NULL)
        {
        printf("empty\n");
    }
    else
    {
        printf("popped element is %d",temp->data);
        top=top->link;
        free(temp);


    }
}

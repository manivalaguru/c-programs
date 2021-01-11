
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

//let us c 11th sum
/*struct node
{
    int data;
    struct node *next;
};
struct node *head,*temp,*new_node;

void add(int);
void display();

int main()
{
    add(23);
    add(12);
    add(17);
    add(25);
   //add(57);
add(10);


    display();
}
void add(int x)
{





new_node=(struct node*)malloc(sizeof(struct node));
     new_node->next=0;
    if(head==0)
    {
        new_node->data=x;

    head=temp=new_node;
    }
    else
    {
        temp->next=new_node;

        temp=head;
        while(temp!=0)
        {
            if(temp->data>x)
            {
                int data_value;
                data_value=temp->data;
                temp->data=x;
                temp=temp->next;
                x=temp->data;
                temp->data=data_value;
                temp=temp->next;


            }
            else
            {
                temp=temp->next;
                if(temp==0)
                {
                    new_node->data=x;
                }

            }
        }
        temp=new_node;
    }


}
void display()
{
temp=head;

    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }

}
*/


struct node
{
    int data;
    struct node *next;
};
struct node *new_node;



//let us c method
int main()
{
    struct node *head;
    head=NULL;
    add(5,&head);
    add(1,&head);
    add(6,&head);
    add(2,&head);
    add(4,&head);
    printf("values are\n");
    display(head);
}

void add(int num,struct node **head)
{
  struct node  *temp=*head;
  new_node=(struct node*)malloc(sizeof(struct node));
  new_node->data=num;

  if(*head==0||(*head)->data>num)
  {
      *head=new_node;
      (*head)->next=temp;
  }
  else
  {

    while(temp->next!=NULL)
    {


          if(temp->data<=num&&(temp->next->data>num||temp->next==NULL))

      {
      new_node->next=temp->next;
      temp->next=new_node;
      return;
      }
      temp=temp->next;
    }
  new_node->next=0;
  temp->next=new_node;
  }

}
void display(struct node *head)
{


    while(head!=0)
    {
        printf("%d\n",head->data);
        head=head->next;
            }
}


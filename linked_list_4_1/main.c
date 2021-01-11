#include <stdio.h>
#include <stdlib.h>
#include<string.h>

//structure 8th sum
/*struct node
{
    int data;
    struct node *next;
};
struct node *head=0,*new_node,*temp;

int choice=1,count;

int main()
{
int new_node_at_beginning,new_node_at_end,node_at_any;
enter();

printf("do you want to enter new node at the beginning(1 for yes 0 for no)\n");
scanf("%d",&new_node_at_beginning);

if(new_node_at_beginning==1)
{


node_at_begining();
}
printf("do you want to enter new node at the end(1 for yes 0 for no)\n");
scanf("%d",&new_node_at_end);
 if(new_node_at_end==1)
{

node_at_end();
}
printf("do you want to enter new node at any location(1 for yes 0 for no)\n");
scanf("%d",&node_at_any);
if(node_at_any==1)
{

any_location();
}
    getch();
}

void enter()
{


    while(choice)
    {
count++;
new_node=(struct node*)malloc(sizeof(struct node));
    printf("enter the data\n");
    scanf("%d",&new_node->xcdata);
    new_node->next=0;
    if(head==0)
    {
    head=temp=new_node;
    }
    else
    {
        temp->next=new_node;
        temp=new_node;
    }
    printf("do you want to continue(0 or 1)\n");
    scanf("%d",&choice);
    }
    display();

}

void node_at_begining()
{
char dh;
count++;
   new_node=(struct node*)malloc(sizeof(struct node));
    printf("enter the data\n");
    scanf("%d",&new_node->data);
    while((dh=getchar())!='\n')
            ;

    new_node->next=head;
    head=new_node;
    printf("newly created list is \n");
    display();
}

void node_at_end()
{
    char dh;
    count++;
new_node=(struct node*)malloc(sizeof(struct node));
    printf("enter the data\n");
    scanf("%d",&new_node->data);
    while((dh=getchar())!='\n');
    new_node->next=0;
    temp=head;
    while(temp->next!=0)
    {

        temp=temp->next;
    }
    temp->next=new_node;
    printf("newly created list is \n");
     display();
}
void any_location()
{
    char dh;
    int position,i=1;

printf("enter the position\n");
scanf("%d",&position);
if(position>count)
{
    printf("invalid position\n");
}
else
{
    temp=head;
while(i<position)
{
    temp=temp->next;
    i++;
}
new_node=(struct node*)malloc(sizeof(struct node));
printf("enter the data\n");
scanf("%d",&new_node->data);
while((dh=getchar())!='\n');
new_node->next=temp->next;
    temp->next=new_node;

    }
    display();
}


void display()
{
temp=head;

    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    printf("total values=%d\n",count);
}

//structure 10th sum


struct node
{
    int data;
    struct node *next;
};
struct node *front=0,*rear=0,*new_node,*temp;
int main()
{
    enqueue(5);
    enqueue(0);
    enqueue(-3);
    display();
    dequeue();
       display();
    peek();

}

void enqueue(int x)
{
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=x;
    new_node->next=0;
    if(front==0&&rear==0)
    {
        front=rear=new_node;
    }
    else
    {
        rear->next=new_node;
        rear=new_node;
    }
}
void display()
{

    if(front==0&&rear==0)
    {
        printf("queue is empty\n");
    }
    else
    {

      temp=front;
    while(temp!=0)
    {

        printf("%d\n",temp->data);
        temp=temp->next;
    }
    }
}
void dequeue()
{
    temp=front;
    if(front==0&&rear==0)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("dequeue elemengt is %d\n",front->data);
        front=front->next;
        free(temp);
    }

}
void peek()
{
    if(front==0&&rear==0)
    {
        printf("queue is empty\n");
    }
    else
        printf("front dat is %d\n",front->data);
}

//structure 12th sum
int main()
{
    struct hurricane
    {
        int lowspeed;
        int highspeed;
        char category[10];
    };
    struct hurricane value[]={
        74,95,"I",
          96,110,"II"  ,
              111,130,"III" ,
              131,155,"IV" ,
              155,200,"V" ,  };
              int ws,i;
              printf("enter the windspeed\n");
              scanf("%d",&ws);
              for(i=0;i<=4;i++)
              {

              if(ws>=value[i].lowspeed&&ws<=value[i].highspeed)
              printf("category of the wind is %s",value[i].category);
              }
}

//structure 13 th sum
int main()
{
    struct player
    {
        char name[20];
        int rank[3];
        int total;
    };

    struct player p[]={
    "sachin",{0},0,
    "pointing",{0},0,
    "dhoni",{0},0,

};
char winner[20];
int i,judge,big;
for(judge=0;judge<=2;judge++)
{
    printf("enter your ranks\n");
    for(i=0;i<=2;i++)
    {
        printf("judge %d enter your mark for %s",judge,p[i].name);
        scanf("%d",&p[i].rank[judge]);
        p[i].total+=p[i].rank[judge];
    }
}
big=p[0].total;
for(i=2;i<=3;i++)
{
    if(p[i].total>big)
    {
        big=p[i].total;
        strcpy(winner,p[i].name);
    }
}
printf("winner =%s score=%d\n",winner,big);
}
*/


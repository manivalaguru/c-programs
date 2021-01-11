#include <stdio.h>
#include <stdlib.h>
/*

//let us c 1st sum


int main()
{
    struct students
    {
        int rollno;
        char name[40];
        char dept[20];

        int year;
    };
    struct students a[450];
    int i;int dh;
    for(i=0;i<=0;i++)
    {
        printf("enter roll number,name,dept,year\n");
        scanf("%d%s%s%d",&a[i].rollno,&a[i].name,&a[i].dept,&a[i].year);

          while((dh=getchar())!='\n')
            ;
    }
    for(i=0;i<=0;i++)
printf("%d%s%s%d\n",a[i].rollno,a[i].name,a[i].dept,a[i].year);

}


void linkfloat()
{
    float a=0,*b;
    b=&a;
    a=*b;

    }




   struct students
    {
        int rollno;
        char name[40];
        char dept[20];

        int year;
    }; struct students a[450];


void display1(struct students a[],int n)
    {
        int i;int dh;
        for(i=0;i<=n;i++)
        {
             printf("enter roll number,name,dept,year\n");
        scanf("%d%s%s%d",&a[i].rollno,&a[i].name,&a[i].dept,&a[i].year);

          while((dh=getchar())!='\n')
            ;
        }
    }


void print(struct students a[],int n)
{
    int i;
    for(i=0;i<=n;i++)
printf("%d%s%s%d\n",a[i].rollno,a[i].name,a[i].dept,a[i].year);

}


void year(struct students a[],int n)
{
    int i,k;
    printf("enter the desired year\n");
    scanf("%d",&k);
    for(i=0;i<=n;i++)
    {
        if(a[i].year==k)
        {
            printf("%s\n",a[i].name);
        }
    }
}
void roll(struct students a[],int n)
{
    int i,k;
    printf("enter the roll no print the details\n");
    scanf("%d",&k);
    for(i=0;i<=n;i++)
    {
        if(a[i].rollno==k)
        {
            printf("%d%s%s%d\n",a[i].rollno,a[i].name,a[i].dept,a[i].year);
        }
    }
}
int main()
{


    int i;
    display1(a,4);
    print(a,4);
year(a,4);
roll(a,4);



}

void linkfloat()
{
    float a=0,*b;
    b=&a;
    a=*b;

    }

//let us c method

 struct stud
 {
     int r_n;
     char name[20];
     char dep[15];
     char course[10];
     int y_o_j;
 };

 struct stud s[450];

 void set_student_data();
 void display();
 void name_acc_year(int);
 int data_acc_rollno(int);


 int main()
 {
     int i,r;
     int y;
     printf("\n enter the data for each student\n\n");
     set_student_data();
     display();
     printf("\n enter the year of joining of student");
     scanf("%d",&y);
    name_acc_year(y);
     printf("\n enter the roll number of the student");
     scanf("%d",&r);
     data_acc_rollno(r);
 }


 void set_student_data(){
 int i;
 for(i=0;i<=2;i++)
 {
     fflush(stdin);
     printf("\n enter the roll number of the student\n");
     scanf("%d",&s[i].r_n);
     fflush(stdin);
     printf("enter th name of the student\n");
     scanf("%s",&s[i].name);
      fflush(stdin);
      printf("\nenter the name of the department");
      scanf("%s",&s[i].name);
       fflush(stdin);
      printf("\nenter the name of the course");
      scanf("%s",&s[i].course);
       fflush(stdin);
      printf("\nenter the joining date of the student");
      scanf("%s",&s[i].y_o_j);

 }

 }
 void display()
 {
     int i;
     for(i=0;i<=2;i++)
     {
         printf("\n\trpll number of student %d=%d\n",i+1,s[i].r_n);
         printf("\n\tname of student %d=%s\n",i+1,s[i].name);
         printf("\n\tname of the department =%s\n",s[i].dep);
         printf("\n\tname of the course =%s\n",s[i].course);
         printf("\n\tyear of joining of student %d=%d\n\n",i+1,s[i].y_o_j);
     }
 }

 void name_acc_year(int y)
 {
     int i,j=0;
     for(i=0;i<=2;i++)
     {
         if(y==s[i].y_o_j)
         {
             printf("%s joined in the year %d\n",s[i].name,s[i].y_o_j);
             j=1;
         }
     }
     if(j==0)
        printf("\n no student joined in the year %d",y);
 }

 int data_acc_rollno(int r)
 {
     int i,j=0;
     for(i=0;i<=2;i++)
     {
         if(s[i].r_n==r)
         {
              printf("\n\trpll number of student =%d\n",s[i].r_n);
         printf("\n\tname of student =%s\n",s[i].name);
         printf("\n\tname of the department =%s\n",s[i].dep);
         printf("\n\tname of the course =%s\n",s[i].course);


         printf("\n\tyear of joining of student %d=%d\n\n",i+1,s[i].y_o_j);
         j=1;
         }
     }
     if(j==0)
        printf("\n no such roll number is prswnt");
 }
*/



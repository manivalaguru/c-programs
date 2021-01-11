#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/*
int main()
{
    int a;
    int n=1;
    int k=2;
    printf("enter   the number  for a");

scanf("%d",&a);
while(k<=a)
{
    n=n*k;
    k++;
}

    printf("n=%d\n",n);
}






int main()
{
    int a,b,c;
    printf("enter   the number");
    scanf("%d",&a);
    printf("enter   the power");
    scanf("%d",&b);
c=pow(a,b);
printf("c=%d",c);
}
int main()
{
    int x,y,i=1;
    long    int power=1;
    printf("enter   two numbers");
    scanf("%d%d",&x,&y);
    while(i<=y)
    {
        power=power*x;
        i++;

    }
    printf("%d  to  the power  %d   is  %ld\n",x,y,power);
}


int main()
{
    int d=0;
    char k;

    while(d<=255)
    {
        printf("the ascii   value   for %d IS   %c\n",d,k);
        d++;
        k++;
    }

}

int main()
{
    int hr,k,h;
    int i=0;

    while(i<=10)

    {
        printf("enter   how hours   employee    are working");
    scanf("%d",&hr);
        if(hr>40)
{
        k=hr-40;
        h=k*12;

 printf("the employees    get overtime    rupees  for   %d employee  is  %d\n",i,h);

}
else
{
    h=0;
    printf("employee    WILL    not get over    time    pay\n");

}
 i++;
    }
}
int main()
{
    int i=1;
 int    num,m,j,k,o,q,w,e,r,t;
 while(i<=500)
 {

 m=i;
 j=i/100;
 k=i%100;
 o=j*j*j;
q=k/10;
w=k%10;
e=q*q*q;
r=w*w*w;
t=r+e+o;
i++;
if(t==m)
{
    printf("the number  %d  is  amstrong\n",t);

}


 }

}




int main()
{
    int num,limit;
    int zero=0,pos=0,neg=0;
printf("enter   the limit\n");
scanf("%d",&limit);

printf("enter   %d  numbers\n",limit);


    while(limit)
    {
        scanf("%d",&num);

    if(num==0)

        zero++;
    else    if(num>=1)

    pos++;

    else

      neg++;
      limit--;
    }
 printf("the number  of  zero    is  %d\n",zero);
     printf("the number  of positives    is  %d\n",pos);
      printf("the number  of  negatives   is  %d\n",neg);
}
int main()
{

    int pos,neg,zero,num;
    char    ans='y';
    pos=neg=zero=0;
    while(ans=='y'||ans=='Y')
    {
        printf("enter   the number");
        scanf("%d",&num);
          if(num==0)
            zero++;


        if(num>=1)

            pos++;
        if(num<0)
        neg++;
  fflush(stdin);
        printf("do  you want    to  continue?");
        scanf("%c",&ans);

    }
     printf("the number  of  zero    is  %d\n",zero);
     printf("the number  of positives    is  %d\n",neg);
      printf("the number  of  negatives   is  %d\n",pos);
}

int main()
{
    int num,limit,num1,range;
      char    ans='y';
      while(ans=='y'||ans=='Y')
    {
        printf("enter   the number");
        scanf("%d%d",&num,&num1);
        if(num>num1)
        range=num-num1;
        else
            range=num1-num;
              fflush(stdin);
        printf("do  you want    to  continue?");
        scanf("%c",&ans);

}

    printf("range=%d\n",range);
}


int main()
{
    int num,limit,num1,range,maximum,minimum,largest,smallest;
    int a=0,b=0;

    printf("enter   the numbers(evenonly)\n ");
    scanf("%d",&limit);

    printf("enter    %d numbers \n",limit);
    while(limit)
    {
       scanf("%d%d",&num,&num1);
    if(num>num1)
    {
    maximum=num;
    minimum=num1;
    }
   else if(num<num1)
   {
       minimum=num;
      maximum=num1;
   }

   if(a<maximum)
   {
    a=maximum;
   }
    else
        a=a;
    if(b==0)
    {
        b=minimum;
    }
   else if(b<minimum)
    b=b;
    else
        b=minimum;


    limit--;
    limit--;
    }
    largest=a;
    smallest=b;
    printf("largest    is   %d\n  smallest    is  %d\n",largest,smallest);
    printf("range=%d",largest-smallest);
}


int main()
{
int n,no,flag,small,big,range;
flag=0;
printf("how many    numbers inthe   set\n");
scanf("%d",&n);

while(n>0)
{
    printf("enter   no\n");
    scanf("%d",&no);
    if(flag==0)
    {
        small=big=no;
        flag=1;
    }
    else    if(no>big)
        big=no;
   else if(no<small)
        small=no;

n--;
}

if(small<0)
    range=small+big;
else
    range=big-small;
if(range<0)
    range=range*-1;
printf("range=%d\n",range);
}
int main()
{
    int r=1,num,num1,a=0,b=0,maximum,minimum,largest,smallest;
    printf("enter   the two numbers");
    while(r==1)
    {
       scanf("%d%d",&num,&num1);
    if(num>num1)
    {
    maximum=num;
    minimum=num1;
    }
   else if(num<num1)
   {
       minimum=num;
      maximum=num1;
   }

   if(a<maximum)
   {
    a=maximum;
   }
    else
        a=a;
    if(b==0)
    {
        b=minimum;
    }
   else if(b<minimum)
    b=b;
    else
        b=minimum;




        printf("enter   the value   for r(0 for terminate   1   for continuation)\n");
        scanf("%d",&r);
    }
    largest=a;
    smallest=b;
    printf("largest    is   %d\n  smallest    is  %d\n",largest,smallest);
    printf("range=%d",largest-smallest);

}

int main()
{
    int num,qut,rem,ret,oldrevnum,r=1,number,newrevnum,orginal;
    printf("enter   the integer value(up    to  4   digits)\n");
        scanf("%d",&num);

        ret=num;
      qut=num/8;
rem=num%8;
num=qut;
oldrevnum=rem;
orginal=rem;

    while(ret>=8)

    {

r=10*r;
r=r;


qut=num/8;
rem=num%8;
num=qut;
newrevnum=rem;
newrevnum=r*newrevnum;
orginal=newrevnum+oldrevnum;
oldrevnum=orginal;
if(qut==0)
       {
           ret=7;;
       }


    }


    printf("revnum=%d",orginal);

}
*/

int main()
{
    int total=21,user,comp=0;



    while(total<=21&&total>=2)
    {
printf("pick    one to  four    sticks\n");

    scanf("%d",&user);

if(user>4)

    printf("pick  a   number  below   4\n");
  else  if(user==1)
{
        comp=5-user;
    total=total-user-comp;
   printf("computer    picks   %d\n",comp);

        printf("total   cards   remaining:   %d\n",total);

}
  else    if(user==2)
  {

                comp=5-user;

        total=total-user-comp;
            printf("computer    picks   3\n");
              printf("total   cards   remaining:   %d\n",total);
  }

              else    if(user==3)
              {
                comp=5-user;

        total=total-user-comp;
              printf("computer    picks   %d\n",comp);
              printf("total   cards   remaining:   %d\n",total);
    }
 else    if(user==4)
 {


                comp=5-user;

        total=total-user-comp;
              printf("computer    picks   %d\n",comp);
              printf("total   cards   remaining:   %d\n",total);

 }


}
if(total==1)
    printf("computer    wins");

 else   if(total>21)
    printf("player  wins");



}

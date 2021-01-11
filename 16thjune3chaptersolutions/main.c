#include <stdio.h>
#include <stdlib.h>

/*int main()
{
   int  cp,sp;
   printf("enter    the cost    and selling price");
   scanf("%d%d",&cp,&sp);
   if(cp<sp)
    printf("profit");
   else if(cp==sp)
    printf("no  loss    no  profit");
    else
    printf("lose");
}


int main()
{
    int a;
    printf("enter   the number  a");
    scanf("%d",&a);
    if(a%2==0)
        printf("a   is  even    number");
    else
              printf("a   is  odd   number");
}


int main()

{
    int a;
    printf("enter   the year");
    scanf("%d",&a);
    if(a%4==0)
        printf("this    year    is  leap    year");
        else
        printf("this    year    is  not leap    year");
}
int main()
{
    int yr;
    printf("enter   the year\n");
    scanf("%d",&yr);
    if(yr%100==0)
    {
        if(yr%400==0)
            printf("leap    year\n");
            else
            printf("not a   leap    year\n");
    }
}



int main()
{


int n,t,a,b;
long    int revnum=0;
printf("enter   the 5   digit   number\n");
scanf("%d",&n);
t=n;
a=n%10;
n=n/10;
revnum=revnum+a*10000;
a=n%10;
n=n/10;
revnum=revnum+a*1000;
a=n%10;
n=n/10;
revnum=revnum+a*100;
a=n%10;
n=n/10;
revnum=revnum+a*10;
a=n%10;
revnum=revnum+a;
if(t==revnum)
    printf("original    and reversed    number  same\n");
else
    printf("original    and reversed    number not same\n");

}

int main()
{
    int r,s,a;
    printf("enter   the ages    of  ram sanjay  ajit");
    scanf("%d%d%d",&r,&s,&a);
    if(r>a)
        printf("ajith   is  smaller");
    else    if(r>s)
        printf("sanjay  is  smaller");
        else
            printf("ram is  smaller");

}
int main()
{
    int y;
    printf("enter    any year    1   to  2020\n");
    scanf("%d",&y);
    if(yr==1)
        ("the day   is  monday");
    if(yr==2)
        ("the day   is  tuesday");
}
int main()
{
    int a,b,c,t;
    printf("enter   a   b   and c");
    scanf("%d%d%d",&a,&b,&c);
    t=a+b+c;
    if(t==180)
        printf("a   b   c   are triangle");
    else
        printf("a   b   c   are not triangle");
}
int main()
{
    int num,no;
    printf("enter   the number");
    scanf("%d",&num);
    no=num;
    if(no<0)
    {
        num=-1*num;
    }
    printf("the absolute    value   for %d  is  %d",no,num);
}

int main()
{

    int l,b,perimeter,area;
    printf("enter   length  and breath\n");
    scanf("%d%d",&l,&b);
    perimeter=2*(l+b);
    area=l*b;
    if(area>perimeter)
    {
        printf("it    is  greater");
    }
    else
        printf("no    greater");

}

int main()
{

    float x1,x2,x3,y1,y2,y3,m,n;
    printf("enter   the values  for x1  and y1");
    scanf("%f%f",&x1,&y1);
     printf("enter   the values  for x2  and y2");
    scanf("%f%f",&x2,&y2);
    printf("enter   the values  for x3  and y3");
    scanf("%f%f",&x3,&y3);
    m=(y2-y1)/(x2-x1);
    n=(y3-y2)/(x3-x2);
    if(m==n)
    {
        printf("all three   points  are fall    in  straight    line");

    }
    else
        printf("not   a   straight    line");
}
int main()
{
    int     x,y;
    printf("enter   the value   for x   and y");
    scanf("%d%d",&x,&y);
    if(x==0&&y==0)
        printf("the point   is  on  orgin");
  else  if(x==0&&y!=0)
        printf("the point   on  yaxis");
 else   if(x!=0&&y==0)
        printf("the point   on  xaxis");
    else
        printf("error");
}

int main()
{
    int x,y,r,dis;
    float   d;
    printf("enter   the radius");
    scanf("%d",&r);
    printf("enter   the points  x1   and y1");
    scanf("%d%d",&x,&y);
    dis=x*x+y*y;
    d=r*r;
    if(dis==d)
        printf("the point   is  on  the cicle");
    else    if(dis>d)
        printf("the point   is  outsside  the cicle");\
        else
        printf("the point   inside  the circle");

}
*/
 int main()
{
    int leapdays,firstday,yr;
    long    int normaldays,totaldays;
    printf("enter   year");
    scanf("%d",&yr);
    normaldays=(yr-1)*365;
    leapdays=(yr-1)/4-(yr-1)/100+(yr-1)/400;
    totaldays=normaldays+leapdays;
    firstday=totaldays%7;
    if(firstday==0)
        printf("monday\n");

   else if(firstday==1)
        printf("tuesday");
   else       if(firstday==2)
        printf("wedday");
   else       if(firstday==3)
        printf("thrusday");
    else      if(firstday==4)
        printf("friday");
    else      if(firstday==5)
        printf("satday");
       else   if(firstday==6)
        printf("sunday");
        else
       printf ("wrong");


}


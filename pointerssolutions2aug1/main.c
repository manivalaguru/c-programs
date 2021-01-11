#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/*my        method*/
/*
void   calc(int   ,float* );
int main()
{
    int x;


    float   result=0;
    printf("enter   the value   of  x");
    scanf("%d",&x);
    calc(x,&result);

printf("sin(%d)=(%f)",x,result);

}

void  calc(int  x,float   *result)
{

 int i,j=1;

 float  r,power;
 float fact=1.0;
for(i=1;i<=19;i++)
    {
        if(i==1)
            r=x;
        else
        {

        i=i+1;
        for(j=j;j<=i;j++)
        {
        fact=fact*j;
        power=pow(x,i);

        }

 r=r-(power/fact);
r=-r;
 *result=-r;




    }

    }



}

void    calc(float,float*);
int main()
{
    int x;
    float   radian,result=0;
    printf("enter   the value   of  x\n");
    scanf("%d",&x);
    radian=x*(3.14159/180.0);
    calc(radian,&result);
    printf("sin(%d)=%f\n",x,result);
}
void    calc(float  rad,float   *res)
{
    int i,j,k=1;
    float   power,fact=1.0;
    for(i=1,j=1;i<10;i++,j+=2)
    {
       if(j==1&&i==1)
            *res=rad;
       else if(j>=2&&i>=2)
       {
           for(k=k;k<=j;k++)
           {
               fact=fact*k;
               power=pow(rad,j);
           }
           *res=*res-(power/fact);
*res=-*res;


       }
    }
}

void    circular(int*,int*,int*);
int main()
{
    int a,b,c;
    printf("enter   the value   of  a   b   c\n");
    scanf("%d%d%d",&a,&b,&c);
    circular(&a,&b,&c);
    printf("after   circular    shift   a=%db=%dc=%d\n",a,b,c);
}
void    circular(int    *a,int  *b,int  *c)
{
    int t;
    t=*a;
      *a=*c;
       *c=*b;
  *b=t;


}


void    triangle(int,int,int,float  *);
int main()
{
    int a,b,c;
    float   area;
    printf("enter   the values  of  a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    triangle(a,b,c,&area);
    printf("area=%f",area);
}
void    triangle(int    x,int   y  ,int z,float  *area)
{
    float   s;
    s=(x+y+z)/2;

    *area=(s*(s-x)*(s-y)*(s-z));
    *area=sqrt(*area);
}

*/
void    euclid(int,int);
int main()
{
    int t,a,b;
    printf("enter   the values  of  a &b");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        a=a;
        b=b;
    }
    else
    {
        t=a;
        a=b;
        b=t;
    }
    euclid(a,b);
}
void    euclid(int  x,int   y)
{
    int r=1,d;
    while(r)
    {
    d=x/y;
    r=x%y;
    x=y;
    y=r;
    }
    printf("gcd=%d",x);
}

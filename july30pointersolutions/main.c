#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/*
int mean(int *,int *,int *,int *,int *,int  *,int   *,float   *,  double *);
int main()
{
    int a,b,c,d,e,sum,averge;
   float   std;
  double   deviation;
    printf("enter   the values(5values)");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    mean(&a,&b,&c,&d,&e,&sum,&averge,&std,&deviation);
    printf("sum=%d",sum);
    printf("averge=%d",averge);
    printf("std=%f",std);
    printf("deviation=&lf",deviation);
}

int mean(int *x,int *y,int *z,int *u,int *v,int *sum,int    *averge,float *std,  double  *deviation)
{

  *sum=*x+*y+*z+*u+*v;
  *averge=(*x+*y+*z+*u+*v)/5;
 *std=pow((*x-*averge),2)+pow((*y-*averge),2)+pow((*z-*averge),2)+pow((*u-*averge),2)+pow((*v-*averge),2);
 *std=*std/5;
 *deviation=sqrt(*std);

}


void    functio(float    *,float  *,float   *);
int main()
{
    float total;
    float   avg,per;

    functio(&total,&avg,&per);
    printf("total=%f\navg=%f\nper=%f\n",total,avg,per);
}


void    functio(float  *total,float *avg,float    *per)
{
    int n1,n2,n3;

    printf("enter   marks   in  three   subjects(lessthanorequalto100)");
    scanf("%d%d%d",&n1,&n2,&n3);
    *total=n1+n2+n3;
    *avg=*total/3;

    *per=(*total/300)*100;
}








/*let   us  c   method*/
/*float   numerator(float,int);
float   denominator(int);
int main()
{
    float   n,x,a,b,sum=0;
    int i,j;
    printf("enter   the number x\n ");
    scanf("%f",&x);
    for(i=1,j=1;i<=10;i++,j+=2)
    {
        a=numerator(x,j);
        b=denominator(j);
        n=a/b;
        (i%2==0)?sum=sum-n:(sum=sum+n);
    }
    printf("sum=%f\n",sum);
}
float   numerator(float y,int   j)
{
    float   k=1;
    int m;
    for(m=1;m<=j;m++)
        k*=y;
        return(k);
}
float   denominator(int j)
{
    int m;
    float   h=1;
    for(m=1;m<=j;m++)
        h=h*m;
    return(h);
}
*/

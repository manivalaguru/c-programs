#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int i=2,num;

    for(num=2;num<=300;num++)

    {
        while(i<=num-1)

        {
        if(num%i==0)
        {
break;

        }
    i++;
    }

if(i==num)
    printf("    %d  is  prime   number\n",num);
i=2;
}
}
int main()

{
    float   n=0,ans=1,k,t=0;
    for(float i=1;i<=7;i++)
    {
        ans=ans*(1/(i));

k=i*ans;

t=t+k;


    }
    printf("total       value    is  %f\n   ",t);
}


int main()
{
    int r,c,m;
    for(r=1;r<=3;r++)
    {
        for(c=1;c<=3;c++)
        {
          for(m=1;m<=3;m++)
          {
              printf("%d,%d,%d\n",r,c,m);
          }
        }
    }
}
int main()
{
    int num,k;
    printf("enter   the number\n");
    scanf("%d",&num);
    printf("multiplication  table   for number  %d  is\n",num);

    for(int i=1;i<100;i++)
    {
        k=num*i;
        printf("%d*%d=%d\n",num,i,k);
    }

}
int main()
{
    float i;
    for(float   y=1;y<=6;y++)
    {
        for(float   x=5.5;x<=12.5;x=x+0.5)
        {
            i=2+(y+0.5*x);

            printf("the value   of  i   is  %f\n",i);
        }
    }
}
int main()


{
    int p,i;
float   r=0.0,n=0.0,q=0.0,a=0.0;
    for(i=1;i<=10;i++)
    {
        printf("enter   the values  of  p,r,n,q");
        scanf("%d%f%f%f",&p,&r,&n,&q);

        a=(1+r/q);
        a=pow(a,(n*q));
        a=p*a;
        printf("compound    interest    =%f",a);
    }
}

int main()
{

    float x,k=0.0,t=0.0;
    int i;
    printf("enter   the value   of  x");
    scanf("%f",&x);
    for(i=1;i<=7;i++)
    {
        if(i==1)
        {
        k=(x-1)/x;

        }
        else
        {


            k=k+pow((x-1)/x,i)*0.5;



        }

    }

      printf("sum =%f",k);
}

int main()
{
    int a,b,c,k,t;
    for(a=1;a<=30;a++)
    {
        for(b=1;b<=30;b++)
        {
            for(c=1;c<=30;c++)
            {
                k=(a*a)+(b*b);
                t=c*c;
                if(k==t)
                {
                    printf("(%d,%d,%d)\n",a,b,c);
                }
            }
        }
    }
}
int main()
{
long    int n;
int p,k;
    for(p=10;p>=1;p--)
    {
        if(p==10)
        {
            n=100000;
            printf("population  of  the town at %dth    year    =%ld\n",p,n);
        }
        else
        {
            k=n/10;
            n=n+k;
            printf("population  of  the town    at  %dth    year    is%ld\n",p,n);
        }
    }
}


    int main()

    {
          int i;
        for(i=0;i<=23;i++)
        {
            if(i>=0&&i<=12)

                printf("hr=%d am(midnight)\n",i);

                else
                printf("hr=%d   pm(noon)\n",i);
        }
    }



int main()
{
    int n,i,j,k,l,a,b;
    printf("enter   the value   for n(1 to  enter)\n");
    scanf("%d",&n);
    if(n==1)
    {
        for(i=1;i<=30;i++)
        {
            for(j=1;j<=30;j++)
            {
               for(k=1;k<=30;k++)
               {
                   for(l=1;l<=30;l++)
                   {
                       if((i!=j&&i!=k&&i!=l)&&(j!=i&&j!=k&&j!=l)&&(k!=i&&k!=j&&k!=l)&&(l!=i&&l!=j&&l!=k))
                       {
                           a=i*i*i+j*j*j;
                           b=k*k*k+l*l*l;
                           if(a==b)
                           {
      printf("a=%d\n",a);


                           }
                       }
                   }
               }
                }

            }
        }

    }
    int main()
    {
        int i,num,x,y,count;
        num=30000;
        for(i=1;i<=num;i++)
        {
            count=0;
            for(x=1;x*x*x<i;x++)
            {
                for(y=x;x*x*x+y*y*y<=i;y++)
                {
                    if(x*x*x+y*y*y==i)
                    {
                        count++;
                    }
                }
            }
            if(count==2)
            {
                printf("%d%(%d)(%d)(%d)\n",i,num,x,y,count);
            }
        }
    }

int main()
{
    int i,j,k,l;
    for(i=1;i<=1;i++)
    {
        printf("       ");

        printf("1\n");




        printf("     ");

            printf("2   3\n");
               printf("  ");

               printf("4    5    6\n");

               printf("");

               printf("7   8    9    10\n");


    }

}*/

int main()
{
    int i,j,k,l,sp;
    sp=20;
    for(i=1,k=1;i<=5;i++)
    {
        for(l=1;l<=sp;l++)
            printf(" ");
        sp-=2;
        for(j=1;j<=i;j++,k++)
            printf("%d",k);
        printf("\n");
    }
}

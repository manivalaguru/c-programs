#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int i,j,k;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            for(k=1;k<=3;k++)
            {
                if(i==3&&j==3&&k==3)
                    goto    out;
                else
                    printf("%d%d%d\n",i,j,k);
            }
        }
    }
    out:
        printf("out of  the loops   at  last\n");
}


int main()
{
    int i,j,k;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            for(k=1;k<=3;k++)
            {
                if(i==3&&j==3&&k==3)
                  printf("out of  the loops   at  last\n");

                else
                    printf("%d%d%d\n",i,j,k);
            }
        }
    }


}
int main()
{
int k;
float j=2.0;
switch(k=j+1)
{
case    3:

    printf("trapped\n");
    break;
default:
    printf("caught\n");
}

}

int main()
{
    int a,f,k=2,n=1,i,num,odd,o;
    while(o)
    {

    printf("enter   1   to  find    factorial   of  any given   number\n");
     printf("enter   2   to  find        given   number prime   or  not\n");
        printf("enter   3   to  find        given   number odd   or  even\n");
        printf("enter   4   for exit\n");

        scanf("%d",&a);


        if(a<=4)
        {
            switch(a)
            {
            case    1:
                {
                    printf("enter   the number  to  find    factorial   of  that    given   number\n");

                    scanf("%d",&f);
                    while(k<=f)
                    {
                    n=n*k;
                    k++;
                    }

                    printf("factorial   of  the number  is=%d\n\n",n);
                    break;
                    }



            case  2:
                {
                    printf("enter   the number  to  find    that    number  prime   or  not");
                    scanf("%d",&num);
                    i=2;
                    while(i<=num-1)
                    {
                        if(num%i==0)
                        {
                            printf("not a   prime   number\n");
                            break;
                        }
                        i++;
                    }
                    if(i==num)
                        printf("prime   number\n");
break;

                }

            case    3:

                printf("enter   the number\n");
                scanf("%d",&odd);
                if(odd%2==0)
                    printf("number  is  even\n");
                else
                    printf("number  is  odd\n");
                break;

            case    4:

                o=0;



            }



        }

}

}*/

int main()
{
    char   ch;
    int a;

printf("enter   student grade(f,s,t)");
scanf("%c",&ch);

switch(ch)
{
case    'f':
    printf("enter   number  of  failed  subjects(1to4)\n");
scanf("%d",&a);
if(a>=4)
    printf("no  grace");
else
    printf("grace=5 marks   per subject");
break;

case    's':
     printf("enter   number  of  failed  subjects(1to4)\n");
scanf("%d",&a);
if(a>=3)
 printf("no  grace");
    else
    printf("grace=4 marks   per subject");
break;
case    't':
    printf("enter   number  of  failed  subjects(1to4)\n");
scanf("%d",&a);
if(a>=2)
    printf("no  grace");
    else
    printf("grace=5 marks   per subject");



}
}




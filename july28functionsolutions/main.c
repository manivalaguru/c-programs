#include <stdio.h>
#include <stdlib.h>

/*int fact(int);
int main()
{
    int f;
    long    m;
    printf("enter   the value   to  find    factotrial\n");
    scanf("%d",&f);
   m= fact(f);
    printf("factorial   of  the number  =%d",m);
}
int fact(int    f)
{
   int k=1;
   long m=1;
    while(k<=f)
    {
        m=m*k;
        k++;

    }
return m;
}

int power(int,int);
int main()
{
    int x,y,power1;

    printf("enter   two numbers");
    scanf("%d%d",&x,&y);
   power1= power(x,y);
   printf("power=%d",power1);
}
int power(int   a,int   b)
{
    int i;
    int    power1=1;
    for(i=1;i<=b;i++)
    power1=power1*a;
    return  power1;

}
char   roman(int);
int main()
{
    int year;
    char    roman_eq;
    printf("enter   the  year\n");
    scanf("%d",&year);
    roman_eq=roman(year);



}

char    roman(int   year)
{

   char roman_eq;
   int  div,rem;

rem= year%1000;
div=year/1000;
roman_eq='m';

        for(int    n=div;n>=1;n--)
        printf("roman   equivalent=%c",roman_eq);

year=rem;

rem=year%500;
div=year/500;
roman_eq='d';

        for(int    n=div;n>=1;n--)
            printf("%c",roman_eq);

year=rem;


rem=year%100;
div=year/100;
roman_eq='c';

        for(int    n=div;n>=1;n--)
            printf("%c",roman_eq);

year=rem;

rem=year%50;
div=year/50;
roman_eq='l';

        for(int    n=div;n>=1;n--)
            printf("%c",roman_eq);

year=rem;

rem=year%10;
div=year/10;
roman_eq='x';

        for(int    n=div;n>=1;n--)
            printf("%c",roman_eq);

year=rem;

rem=year%5;
div=year/5;
roman_eq='v';

        for(int    n=div;n>=1;n--)
            printf("%c",roman_eq);

 year=rem;

 rem=year%1;
 div=year/1;
 roman_eq='i';

        for(int    n=div;n>=1;n--)
            printf("%c",roman_eq);



  }

int   roman(int,int,char);
int main()
{
    int year;

    printf("enter   the  year\n");
    scanf("%d",&year);
    year=roman(year,1000,'m');
    year=roman(year,500,'d');
    year=roman(year,100,'c');
    year=roman(year,50,'l');
    year=roman(year,10,'x');
    year=roman(year,5,'v');
    year=roman(year,1,'i');





}
int    roman(int   year,int    k,char  ch)
{
    int i,j;

    j=year/k;

    for(i=1;i<=j;i++)
        printf("%c",ch);

    return(year-k*j);

}

int leap(int);
int main()
{
    int year;
    printf("enter   the year");
    scanf("%d",&year);
    leap(year);

}
int leap(int    year)
{
    if(year%4==0&&year%100!=0||(year%400==0))
        printf("leap    year");
    else
            printf("not an  leap    year");
}





/*

int primefactors(int);
int main()
{
    int num;
    printf("enter   the number\n");
    scanf("%d",&num);
    primefactors(num);

}

int primefactors(int    num)
{
    int i=2,n;
    printf("prime       factors is  \n");
    for(n=1;n<=300;n++)
    {
        while(i<n)
        {
         if(n%i==0)
                break;

            i++;
        }
        if(i==n)
        {
            if(num%i==0)
            {
                printf("%d\n",i);
               num= num/i;
               i=2;
               n--;

            }

        }
    }


}*/
int primefactors(int);
int main()
{
    int num;
    printf("enter   the number\n");
    scanf("%d",&num);
    primefactors(num);


}
int primefactors(int    num)
{
    int i=2;
    printf("prime   factors of%d    are\n",num);
    while(num!=1)
    {
        if(num%i==0)
            printf("%d\n",i);

    else
    {
        i++;

    continue;
    }
    num=num/i;
    }

}

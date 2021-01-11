#include <stdio.h>
#include <stdlib.h>

/*let   us  c   1stprogram*/
/*void sum(int);
int main()
{
int a;
printf("enter    the five    digit   number\n");
scanf("%d",&a);
sum(a);

}
void    sum(int x)
{
    int t,k,m,sum=0;
    m=10000;
   for( m=m;m>=10;m=m/10)
   {
    t=x/m;
    k=x%m;
    x=k;
    sum=sum+t;
   }

sum=sum+k;
printf("sum of  the digits=%d\n",sum);
}



        let   us  c   1stprogram    recursive   method

int    rec(int);
int main()
{
    int a,sum;
    printf("enter   the five    digit   number\n");
    scanf("%d",&a);
    sum=rec(a);
    printf("sum=%d\n",sum);
}

int   rec(int  x)

{
    int s=0;

    if(x!=0)
    {

        s=x%10+rec(x/10);
    }
    return  s;
}





let   us  c   fibbonacci    namma   method  without recursion


int rec(int);
int main()
{
    int n=2;
    rec(n);

}
int rec(int num)
{
    int a=0,b=1,c,d;
    for(int t=1;t<=25;t++)
   {
       c=a+b;
       d=a;
       a=c;
       b=d;
        printf("%d\n",c);
   }

    }

sum of  two numbers netla   irunthu potadhu


int y;
int add(int m,int   n)
{
    if(n==0)
    {
        printf("%d\n",m);

        return  m;
    }
        printf("%d\n",n);
    y=add(m,n-1)+1;

    printf("%d\n",y);

    return  y;

}


int main()
{
    int     a,b,r;
    printf("enter   the two numbers\n");
    scanf("%d%d",&a,&b);
    r=add(a,b);
    printf("sum of  two numbers is%d",r);
    return  0;
}


let   us  c   fibbonacci    namma   method  with recursion


int rec(int);
int main()
{
    int n=1;
    rec(n);

}
int rec(int num)
{
 static int a=0,b=1,c,d;
if(num<=25)
{
    c=a+b;
       d=a;
       a=c;
       b=d;
        printf("%d\n",c);

  num=rec(num+1);

}

    }


let us  c   c   sum let us  c   method

    void   fibo(int,int);
    int main()
    {
        int old=0,current=1;
        printf("%d\n%d\n",old,current);
        fibo(old,current);
        return  0;
    }
void    fibo(int    old,int current)
{
    static  int terms=2;
    int new;

    if(terms<20)
    {
        new=old+current;
        printf("%d\n",new);
        terms=terms+1;
        fibo(current,new);
    }

}

let us  c       bsum    namma   methodf


int primefactors(int);
int main()
{
    int n,prime;
    printf("enter   the number\n");
    scanf("%d",&n);

    prime=rec(n);

}
int rec(int num)
{
   static int i=2;
    if(num!=1)
    {
        if(num%i==0)
        {
            printf("%d\n",i);
        rec(num/i);
        }
        else
        {
            i++;
            rec(num);

        }
    }

}

let us  c   b   sum let us  c   method

void primefactors(int);
int main()
{
    int n,prime;
    printf("enter   the number\n");
    scanf("%d",&n);

    prime=rec(n);
}

void rec(int num)
{
   static int i=2;
    if(i<=num)
    {
        if(num%i==0)
        {
            printf("%d\n",i);
        num=num/i;
        }
        else

            i++;
            rec(num);


    }

}









let us  c   a   sum let us  c   method

int    rec(int);
int main()
{
    int a,sum;
    printf("enter   the five    digit   number\n");
    scanf("%d",&a);
    sum=rec(a);
    printf("sum=%d\n",sum);
}
int   rec(int  x)
{
    int s;
    if(x<=10)
        return(x);
        else
        {
            printf("%d",x%10);

            s=x%10+rec(x/10);
        }
            return  s;
}





let us  c   e   sum let us  c   method

int getsum(int);
int main()
{
    int s;
    s=getsum(0);
    printf("sum=%d",s);

}
int getsum(int  n)
{
    int sum=0;
    if(n==5)
        return  sum;


    sum=n+getsum(++n);

 printf("%d",sum);
    return(sum);

}






let us  c   decimal to  binary  let us  c   methpd


int binary(int);
int main()
{
    int num;
    printf("enter   the number");
    scanf("%d",&num);
    binary(num);
}
int binary(int  n)
{
    int r;

    r=n%2;
    n=n/2;
    if(n==0)
    {
        printf("binary=%d",r);
        return(r);
    }

    else
        binary(n);
    printf("%d",r);
}

let us  c d     sum  decimal  to  binary without recursion

int  bin(int);
int main()
{
    int a;
    printf("enter  the  decimal value\n");
    scanf("%d",&a);
    bin(a);
    printf("%d",bin(a));

}
int    bin(int x)
{
   int  rem,equ=0,i=1;
while(x!=0)
   {
       rem=x%2;
       x=x/2;
       equ=equ+(rem*i);
       i=i*10;

   }
return  equ;

}

let us  c       g   sum


void primefactors(int);
int main()
{
    int n,prime,i=2;
    printf("enter   the number\n");
    scanf("%d",&n);

    prime=rec(n,i);
}

void rec(int num,int    i)
{

    if(i<=num)
    {
        if(num%i==0)
        {
            printf("%d\n",i);
        num=num/i;
        }
        else

            i++;
            rec(num,i);


    }

}



let us  c   d   sum(decimal to  binary)namma    recursive   method


int    bin(int,int);
int main()
{
    int a,r=0;
    printf("enter   the decimal number\n");
    scanf("%d",&a);
    bin(a,r);
}
int    bin(int x,int    rem)
{

    if(x!=0)
    {
    rem=x%2;
        x=(bin(x/2,rem));
         printf("%d",rem);

    }

}


let   us  c   e sum     namma       1st method(1timesprintagum)



int rec(int*,int);
    int main()
    {
      int  old=1,current=2,new;

        rec(&old,current);
        printf("sum of  first   25  numbers is%d",old);
    }

int rec(int *old,int current)
{

static  int terms=2;
int new;
if(terms<=5)
{
    new=*old+current;
    terms=terms+1;

    *old=new;
    current=current+1;
  *old=  rec(old,current);
}
return  *old;
}


let   us  c   e sum     namma       2nd method(5timesprintagum)


int rec(int,int);
    int main()
    {
      int  old=1,current=2,new;

        rec(old,current);

    }
int rec(int old,int current)
{

static  int terms=2;
    static  int new;
if(terms<=5)
{
    new=old+current;
    terms=terms+1;

    old=new;
    current=current+1;
  new=  rec(old,current);
}
printf("sum of  first   25  numbers is%d\n",new);


return  new;
}
*/


/*let us  c   f   sum*/


void    toh(int,char,char,char);
int main()
{
    int n;
    printf("enter   the number  of  disks");
    scanf("%d",&n);
    toh(n,'A','C','B');
}

void    toh(int    n,char  so,char des,char aux)
{

if(n==1)
{

        printf("move    disk    %d   from    %c  to  %c\n",n,so,des);
        return;
}


else
{
    toh(n-1,so,aux,des);
printf("move    disk    %d  from %c  to   %c\n",n,so,des);
    toh(n-1,aux,des,so);
}
}


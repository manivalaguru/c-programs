#include <stdio.h>
#include <stdlib.h>

/*void    fun1();
void    fun2();
#pragma startup    fun1
#pragma exit    fun2

int main()
{
    printf("inside  main\n");
    return  0;
}

void    fun1()
{
    printf("inside  fun1\n");
}
void    fun2()
{
    printf("inside  fun2\n");
}

#define product(x)  (x*x)
                     int main()
{
    int i=3,j,k,l;
    j=product(i+1);
    k=product(i++);
    l=product(++i);
    printf("%d%d%d%d\n",i,j,k,l);
}

#define pi  3.14
#define area(x,y,z) (pi*x*x+y*z)

int main()
{
    float   a=area(1,5,8);

    float   b=area(area(1,5,8),4,5);
    printf("a=%f\n",a);
    printf("b=%f\n",b);
}




#define test    a
int main()
{
    int a;
    printf("enter   the value   of  a");
    scanf("%d",&a);
    #if test<=5
    printf("mani");
    #elif   test>=6
    printf("kandan");
    #endif // test
}


#define issmall(a)  (a>=97&&a<=122)

#define isupper(a)  (a>=65&&a<=90)
#define isno(a)      (issmall(a)||isupper(a))
#define  big(x,y)       (x>y?x:y)
int main()
{
   char ch,a,b,k;
   printf("enter    any character");
   scanf("%c",&ch);
 if    (issmall(ch)==1)
 printf("small");
 else   if(isupper(ch)==1)
    printf("large");

    else    if(isno(ch)!=1)
        printf("pleae   enter   alphapet");

    printf("enter   thre    two numbers");
    scanf("%d%d",&a,&b);
   k= big(a,b);
        printf("bigger  number=%d",k);

}

#define arthmean(x,y)   ((x+y)/2)

#define  absolutenum(a) ((a>=1)?a:-a)

#define uppertolower(x) (x>=65&&x<=90?(x=x+32):0)

#define   biggest(a,b,c)    (a>b?(a>c?a:b):(b>c?b:c))
int main()
{


    char    ch;
    int r,x,y,z;

        int a,b,k,abs;

    printf("enter   the two numbers ");
    scanf("%d%d",&a,&b);
    k=arthmean(a,b);
    printf("%d",k);

    printf("enter   the number  to  find    absoulte   or  not\n");
    scanf("%d",&abs);
    k=absolutenum(abs);

    printf("absolute    value   of  number  =%d\n",k);

    printf("enter   the uppercase   alphaphet");
    scanf("%c",&ch);

   r= uppertolower(ch);
        printf("the converted   lower   case    alphabet    is    %c\n",r);

        printf("enter   the three mumbers");
        scanf("%d%d%d",&x,&y,&z);

      r=  biggest(x,y,z);
      printf("biggest=%d",r);





}

#define pi  3.1428
#define  area_of_circle(r)  k=(pi*r*r)
#define    perimeter_of_circle(r)    k=(2*pi*r)

int main()
{
    float   radius,k;

    printf("enter   the radius  of  the circle");
    scanf("%f",&radius);
    area_of_circle(radius);
    printf("area=%f\n",k);
    perimeter_of_circle(radius);
    printf("perimeter=%f",k);
}
*/
#define si(p,r,t)   ((p*r*t)/100)
#define am(p,s)     (p+s)

int main()
{

    float   pr,ra,te,s,a;
    printf("enter   principal   rate    andtenure\n");
    scanf("%f%f%f",&pr,&ra,&te);

   s= si(pr,ra,te);



   a=am(pr,s);
printf("simple   interst =%f",s);
   printf("amount=%f",a);
}

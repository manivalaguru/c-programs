#include <stdio.h>
#include <stdlib.h>

/*first program*/
/*
int main()
{
    int yr;
    printf("enter   the year\n");
    scanf("%d",&yr);
    if(yr%400==0||(yr%100!=0&&yr%4==0))
        printf("year    is  leap    year\n");
    else
        printf("NOT AN  LEAP    YEAR\n");
    return 0;
}

/*second    program*/

/*int main()
{
   char a;
   printf("enter    any character");
   scanf("%c",&a);
   if(a>=65&&a<=90)
        printf("character   is  capital letter");
        else    if(a>=97&&a<=122)
            printf("character   is  small   letter");
        else    if(a>=48&&a<=57)
            printf(" this   is  number ");
        else    if(a>=0&&a<=47||a>=58&&a<=64||a>=91&&a<=96&&a>=123&&a<=127)
            printf("this    is  specail symbol");
}*/


/*third program*/
/*
int main()
{
    int a,b,c;
    printf("\nenter   a,b and  c");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b)>c||(a+c)>b||(b+c)>a)
        printf("\ntriangle    is  valid");
    else
        ("triangle  is  not valid");
}*/
/*6th   program*/
/*int main()
{
    int h,t;
    float  c;
    printf("enter   the values  of  h,t and c");
    scanf("%d%d%f",&h,&t,&c);
    if(h>50&&t>5600&&c<0.7)
        printf("grade=10");
    else    if(t<=5600&&h>50&&c<0.7)
        printf("grade=9");
        else    if(h<=50&&c<0.7&&t>5600)
printf("grade=8");
else    if(h>50&&t>5600)
    printf("grade=7");
else    if(h>50||c<0.7||t>5600)
    printf("grade=6");
else
    printf("grade=5");


}
int main()
{
    int a,b,c;
    printf("enter   the three   sides   of  triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c&&c==a)
        printf("the triangle    is  equilateral\n");
    if(a!=b&&b!=c&&a!=c)
        printf("the triangle    is  sxalene\n");
    if((a==b)&&(a==b)!=c||(b==c)&&(b==c)!=a||(a==c)&&(a==c)!=b)
        printf("the triangle    is  isosceles\n");
    if((a*a)+(b*b)==(c*c)||(a*a)+(c*c)==(b*b)||(b*b)+(c*c)==(a*a))
        printf("the triangle    is  right   angle\n");


}

int main()
{
    float r,g,b;
    float   cyan,magenta,yellow,black,r1,g1,b1,max,white;
    printf("enter   r   g   or  b(0to255)");
    scanf("%f%f%f",&r,&g,&b);
    if((r==0)&&(g==0)&&(b==0))
    {
        cyan=0;
        magenta=0;
        yellow=0;
        black=1;
    }
    else    if(r>0||g>0||b>0)
        r1=r/255;
    g1=g/255;
    b1=b/255;
    if(r1>g1&&r1>b1)
        max=r1;
    if(g1>r1&&g1>b1)
        max=g1;
    if(b1>r1&&b1>g1)
        max=b1;
    white=max;
    cyan=white-r1/white;
    magenta=white-g1/white;
    yellow=white-b1/white;
    black=1-white;
    printf("c=%f\nm=%f\ny=%f\nk=%f\n",cyan,magenta,yellow,black);

}
int main()
{

    int weight,height;
    float   bmi;
    printf("enter   weight(kg)  and height(meters)");
    scanf("%d%d",&weight,&height);
    bmi=(weight)/(height*height);
    if(bmi<15)
        printf("starvation");
    if(bmi>=15.1&&bmi<=17.5)
        printf("anorexic");
    if(bmi>=17.6&&bmi<=18.5)
        printf("under   weight");
    if(bmi>=18.6&&bmi<=24.9)
        printf("ideal");
    if(bmi>=25&&bmi<=25.9)
        printf("over    weight");
    if(bmi>=30&&bmi>=30.9);
    printf("obese");
    if(bmi>=40)
        printf("morbitiyu");
}

/*conditional   operators*/
/*
int main()
{

    char    a;
    printf("enter   the alphabet    or  special symbol");
    scanf("%c",&a);


a>=97&&a<=122?printf("character   is  small   letter"):(a>=0&&a<=47||a>=58&&a<=64||a>=91&&a<=96&&a>=123&&a<=127?printf("it    is  special symbol"):printf("not"));



}/*
int main()
{

    char    a;
    printf("enter   the alphabet    or  special symbol");
    scanf("%c",&a);


if(a>=0&&a<=47||a>=58&&a<=64||a>=91&&a<=96&&a>=123&&a<=127?printf("it    is  special symbol"):printf("not"));

}
int main()
{
    int yr;
    printf("enter   the year\n");
    scanf("%d",&yr);
    if(yr%400==0||(yr%100!=0&&yr%4==0)?printf("it    is  leap   year"):printf("not"));
}

int main()
{
    int a,b,c,num;
   printf(" enter       the three   number");
   scanf("%d%d%d",&a,&b,&c);




   (a>b&&a>c?printf("a  is  greater"):(b>c&&b>a?printf("   b    is  greater"):printf("c is  greater")));
}


int main()
{
    int a,b,c,num;

    printf(" enter       the three   number");
   scanf("%d%d%d",&a,&b,&c);

   num=a>b?(a>c?a:b):(b>c?b:c);
   printf("num=%d",num);
}

int main()
{
    float   sal;
    printf("enter   the salary");
    scanf("%f",&sal);
(sal>=25000&&sal<=40000?printf("manager"):(sal>=15000&&sal<25000?printf("accountant"):printf("clerk")));

}
int main()
{

    int angle,sum;
    printf("enter   angle   in  degrees");
    scanf("%d",&angle);
    angle=angle*3.14/180;
    sum=pow(sin(angle),2)+pow(cos(angle),2);
    if(sum==1)
        printf("sum==1");
    else
        printf("sum!=1");

}


int main()
{

    printf("enter   the principal   amount\tenter    rate    percentage(below100)\tenter    tenure(in   years)\n");
}

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/*
sum a
int main()
{
    int a,t,m,k,r,b,c,d,e,n;
    printf("enter   the digits  to  get sum");
    scanf("%d",&a);
    t=a/10000;
    m=a%10000;
    k=m/1000;
    r=m%1000;
    b=r/100;
    c=r%100;
    d=c/10;
    e=c%10;
    n=t+k+b+d+e;
    printf("n=%d",n);


sum h
int main()
{
    int a,b,t;
    printf("the two numbers are");
    scanf("%d%d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("the interchanged    Nnumbers    is  %d%d",a,b);
}
sum j
int main()
{

    int a,b;
    printf("enter   the number");
    scanf("%d",&a);
    b=a/100;

    printf("the  number  of  100 rupees  notes   is  %d\n",b);
     a=a%100;
        b=a/50;

    printf("the  number  of  50 rupees  notes   is  %d\n",b);
        a=a%50;
        b=a/10;
    printf("the  number  of  10 rupees  notes   is  %d\n",b);
    a=a%10;
    b=a/5;
    printf("the  number  of  5 rupees  notes   is  %d\n",b);
    a=a%5;
    b=a/2;
    printf("the  number  of  2 rupees  notes   is  %d\n",b);
    a=a%2;
    b=a/1;
    printf("the  number  of  1 rupees  notes   is  %d",b);




}

int main()
{
   int a,b,c;
    float   s,squareroot,value;
    printf("three   side    of  the triangle    is");
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);

    s=(a+b+c)/2;
    squareroot=(s*(s-a)*(s-b)*(s-c));
    value=sqrt(squareroot);
    printf("area    of  triangle    is  %f",value);
}



int main()
{

    float   x,y,value,angle;
    printf("enter   the value   of  x   and y");
    scanf("%d%d",&x,&y);
    value=(y/x);
    angle=atan(value);
    angle=angle*180/3.14159265359;
    printf("%f",angle);

}
sum e
int main()
{

    float lat1,lat2,long1,long2,d;
    printf("the lattitude   and longitude   of  frist   place");
    scanf("%f%f",&lat1,&long1);
    printf("the lattitude   and longitude   of  second   place");
    scanf("%f%f",&lat2,&long2);
    lat1=lat1*3.14/180;
    lat2=lat2*3.14/180;
    long1=long1*3.14/180;
    long2=long2*3.14/180;

    d=3963*acos(sin(lat1)*sin(lat2)+cos(lat1)*cos(lat2)*cos(long2-long1) )    ;
    printf("the distance    in  nautical    LINES   IS = %f",d);

}

int main()
{
    int t,v;
    float wcf;
    printf("the temperature and velocity    is");
    scanf("%d%d",&t,&v);
    wcf=35.74+0.6215*t+(0.4275*t-35.75)*pow(v,0.16f);
    printf("wind    chill   factor  =%f",wcf);
}


int main()
{
float   angle,s,c,t;
printf("enter    an  angle")  ;
scanf("%f",&angle);
angle=angle*3.14/180;
s=sin(angle);
c=cos(angle);
t=tan(angle);
printf("s=%f\nc=%f\nt=%f\n",s,c,t);
}
sum b*/
int main()
{
    int a,b,c;
    printf("enter   the number  to  be  reversed");
    scanf("%d",&a);
    b=a%10;
    c=a/10;
    printf("%d",b);
    b=c%10;
    c=c/10;
      printf("%d",b);
      b=c%10;
    c=c/10;
      printf("%d",b);
      b=c%10;
    c=c/10;
      printf("%d",b);
       printf("%d",c);
}

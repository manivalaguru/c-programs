#include <stdio.h>
#include <stdlib.h>

/*
3rd sum my  method  wrong
int main()
{
    int i,j;
 char   s[]="manikandan";

 printf("write the wanted from number   and to  number\n");
 scanf("%d%d",&i,&j);
 if(i==0)
 printf("%s",s);
 else   if(i>=1&&i<=10)
 {

     s[j]='\0';
     printf("%s",&s[i]);
 }
}

3rd sum let us  c   method
int main()
{
    char    str[20],news[20];
    char    *s,*t;
    int pos,n,i;
    printf("enter   the string");
    scanf("%s",str);
    printf("enter   the position    and number  of  character   to  be  extracted");
    scanf("%d%d",&pos,&n);
    s=str;
    t=news;
    if(n==0)
        n=strlen(str);
    s=s+pos-1;
    for(i=0;i<n;i++)
    {
        *t=*s;
        s++;
        t++;
    }
    *t='\0';
    printf("\nsub=%s\n",news);
}
5th sum my  method
int main()
{
    char    str[20]="a",chr[20]="b",man[20]="b";
    int i;
    char    *s,*c,*k;
    s=str;
    c=chr;
    k=man;
    for(i=0;i<=5;i++)
    {
        *k=*c;
        strcat(chr,str);
        *s=*k;
        c++;
        printf("target=%s\n",chr);
    }
}


4th sum let us  c   method  method


int main()
{
    char    str[6];
    int num=0,i;
    printf("enter   the string  value:");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=48&&str[i]<=57)
            num=num*10+(str[i]-48);
        else
        {
            printf("not a   vald    string\n");
            return  1;

        }
    }
    printf("\nthe   number  is  %d\n",num);
}





4th sum my  method


int main()
{
    char    str[50];
    int i,len;
    char    *s;
    printf("enter   the string\n");
    scanf("%s",str);
    s=str;
len=strlen(str);
    for(i=0;i<=len-1;i++)
    {
        if(*s>=48&&*s<=57)
        {
    printf("%d",*s-48);
    s++;
        }
        else
            {
            printf("enteravalidstring\n");
        break;
    }

    }

}

7th sum my  method

int main()
{
    int i,sum=0,sum1=0,total;
    char    card[20];
    printf("enter the card number\n");
    scanf("%s",card);
    for(i=0;i<=14;i=i+2)
    {

        card[i]=(card[i]-48)*2;

        if(card[i]>=10)
        {
            card[i]=card[i]-9;
        }

    }
    for(i=0;i<=14;i=i+2)
    {
        sum=sum+card[i];
    }
    for(i=1;i<=15;i=i+2)
    {
        sum1=sum1+(card[i]-48);
    }
    total=sum1+sum;

    if(total%10==0)
    {
        printf("total %d is divisible by 10 so entered card is valod \n",total);

    }
    else
        printf("please enter a valiod ccard number\n");
}

7th sum     let us  c   method
int main()
{
    int len,i,sum,digit,multiple;
    char str[20];
    printf("enter the credit card number");
    scanf("%s",str);
    len=strlen(str);
    sum=0;
    for(i=15;i>=0;i--)
    {
        digit=str[i]-48;
        if(i%2==0)
        {
            multiple=digit*2;
            digit=multiple<10?multiple:multiple-9;

        }
        sum=sum+digit;
    }
    printf("%d\n",sum);
    if(sum%10==0)
    printf("valid\n");
    else
        printf("invlid");
}

5th sum my  method  second  time    is  there   panic   agatha  doubt   kaga    poten

int main()
{
    char    str[25]="a",chr[25]="b",man[20];
    char    *s,*c,*m,k;
    int i;
s=str;
c=chr;
m=man;
printf("%s\n%s\n",str,chr);
    for(i=2;i<=7;i++)
    {
*m=*c;
        strcat(chr,str);
        *s=*m;
        s++;
        c++;


        printf("%s\n",chr);




    }
}
5th sum let us  c   method
int main()
{
int i;
    char    str[50];
    char    first[50]="a";
    char    second[50]="b";
    printf("%s\n",first);
    printf("%s\n",second);

    for(i=0;i<=6;i++)
    {



         strcpy(str,second);
         strcat(str,first);
         strcpy(first,second);
         strcpy(second,str);





        printf("%s\n",str);

    }

}


int main()
{
    int i=0,j=10,num=0;
     char   isbn[26];
     char   *k;

     printf("enter the 10 digit number\n");
     scanf("%s",isbn);
     k=isbn;



for(i=0,j=10;i<=9,j>=0;i++,j--)
{

    if(*k=='\0')
    {
        break;
    }
    if(*k==120||*k==88)
    {
        *k=10;
    }
    if(*k>=48&&*k<=57)
    {
        *k=*k-48;
    }
num=num+(*k*j);
    k++;


}
if(num%11==0)
{
    printf("since %d leaves no remainder when diveded by 11 hence it is valid isbn",num);

}
else
    printf("since %d is not  divisible by 11 hence it is invalid isbn",num);


}
6th sum let us  c method*/dont  put x

int main()
{
    char str[11];
    int i,j,sum;
    printf("enter the 10 digit isbn numbrer\n");
    scanf("%s",str);
    j=2;
    sum=0;
    for(i=8;i>=0;i--)
    {
        sum=sum+(str[i]-'0')*j;
        j++;
    }
    for(i=0;i<=9;i++)
    {
        if((sum+i)%11==0)
            break;
    }
    if(i==str[9]-'0')
        printf("correct\n");
    else
        printf("incorrect");
}

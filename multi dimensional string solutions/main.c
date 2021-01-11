#include <stdio.h>
#include <stdlib.h>

/*






    substring string program my method
int main()
{
    char *str[ ] = {
"We will teach you how to...",
"Move a mountain",
"Level a building",
"Erase the past",
"Make a million",
"...all through C!"
} ;
char *temp;
char str1[20];
    char str2[50];
    str2[0]='\0';
int i,j=0,s,len1=0;

 printf("enter the substring\n");
    gets(str1);


        temp=*(str);
        for(i=0;i<=5;i++)
        {
            len1=len1+strlen(str[i]);
        }

        while(len1>=1)
        {

j=0;
        while(*temp!=' ')
        {
            str2[j]=*temp;
            j++;
            temp++;
            len1--;

        }
str2[j]='\0';
        s=strcmp(str1,str2);
        if(s==0)
        {
            printf("the word %s present in string 1",str2);
            break;

        }
        temp++;

        len1--;

    }
    if(s!=0)
    printf("not found\n");

}


substring let us c method
int main()
{
    char    str1[20],str2[20];
    char    *news,*t,*p;
    int i;
    char *str[ ] = {
"We will teach you how to...",
"Move a mountain",
"Level a building",
"Erase the past",
"Make a million",
"...all through C!"
} ;
printf("\nenter the string  to  be  placed");
scanf("%s",str1);
printf("\nenter the new string");
scanf("%s",str2);
if(strlen(str2)>strlen(str1))
{
    printf("enter   the string  with    %d  characters  only\n",strlen(str1));
}
for(i=0;i<=6;i++)
{
    p=strstr(str[i],str1);
    if(p)
    {
        news=p+strlen(str1);
        strcpy(t,news);
        strcpy(p,str2);
        strcat(p,t);
        break;

    }
}
printf("\nthe   new string  is\n");
for(i=0;i,6;i++)
    printf("%s\n",str[i]);
}




e sum vowel removal my method



int main()
{
    char    str[80],str1[80];
    char    *s,*p;
    printf("\nenter    a    sentance    not more    than    80  character   long:\n");
    gets(str);
    s=str;
    p=str1;
    while(*s)
    {
        if(*s=='a'||*s=='e'||*s=='i'||*s=='o'||*s=='u')
            s++;
        else
            *p++=*s++;
    }
    *p='\0';
    printf("sentance    after   removing    vowel\n");
    puts(str1);
}






for doubt

int main()

{

int i;
    char p[]="nagpur";

    char k[]="kanpur";
    char *r;
    r=k;

    for(i=0;i<=5;i++)
    {
        p[i]=*r;
        r++;
        printf("%c",p[i]);

    }
}


c sum let us c method(alphabhabet)
int main()
{
    char *str[]=
    {
        "rajesh","ashish","milind","pushkar","akash"
    };
    char *t;
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if((strcmp(str[i],str[j]))>0)
            {
                t=str[i];
                str[i]=str[j];
                str[j]=t;

            }
        }
    }
    for(i=0;i<5;i++)
        printf("\n%s",str[i]);
}


c sum my method(alphabhabet)
int main()
{
    int i,j;
    char *name[]=
    {
        "mani","arun","naresh","prasanth","jp","srini"

    };

char *temp;
printf("orginal names\n");
for(i=0;i<=5;i++)
{

printf("  %s\n",name[i]);
}

for(i=0;i<=5;i++)
{
    for(j=i+1;j<=5;j++)
    {
       if(*name[i]>*name[j])
{
    temp=name[i];
    name[i]=name[j];
    name[j]=temp;


}
    }
}
printf("replaced names\n");
for(i=0;i<=5;i++)
{

printf("  %s\n",name[i]);
}

}


names in decending order my method(for my own)
int main()
{
    int i,j;
    char *name[]=
    {
        "mani","arun","naresh","prasanth","jp","srini"

    };

char *temp;
printf("orginal names\n");
for(i=0;i<=5;i++)
{

printf("  %s\n",name[i]);
}

for(i=0;i<=5;i++)
{
    for(j=i+1;j<=5;j++)
    {
       if(*name[i]<*name[j])
{
    temp=name[i];
    name[i]=name[j];
    name[j]=temp;


}
    }
}
printf("replaced names\n");
for(i=0;i<=5;i++)
{

printf("  %s\n",name[i]);
}

}
h sum my method

int main()
{
    char line[80];
    char *l;
    int len,i;
    printf("enter the string\n");
    gets(line);
    len=strlen(line);
    l=line;
    puts("such occurances are");
    for(i=0;i<=len;i++)
    {
        if(*l=='a'||*l=='e'||*l=='i'||*l=='o'||*l=='u')
        {
            *l++;
            if(*l=='a'||*l=='e'||*l=='i'||*l=='o'||*l=='u')
            {
            printf("%c%c\n",*--l,*l);
            }
        }
        *l++;
    }


}


h sum let us c method
int main()
{
    char str[80];
    int count=0;
    char *s=str;
    printf("\n enter the string");
    gets(str);
    while(*s)
    {
        if(*s=='a'||*s=='e'||*s=='i'||*s=='o'||*s=='u')
        {
            s++;
               if(*s=='a'||*s=='e'||*s=='i'||*s=='o'||*s=='u')
               {
                   count++;
               }


        }
         s++;
    }
    printf("number of occuramces is%d\n",count);
}
f sum removal of (the) my method(1)


int main()
{
    char str[80], str2[80];
    char *t,*c;

  t=str;
  c=str2;
    printf("enter the string\n");
    gets(str);
    while(*t)
    {
        if(*t=='t')
        {
            t++;
            if(*t=='h')
            {
                t++;
                if(*t=='e')
                {
                  *c=*++t;
                    c++;

                t++;
                }
            }
        }
        else
        {
        *c=*t;
        c++;
        t++;


        }

    }
    *c='\0';
    puts(str2);
}





f sum removal of (the) my method(2)
int main()
{
    char    str[80],str1[80];
    char    *s,*p;
    printf("\nenter    a    sentance    not more    than    80  character   long:\n");
    gets(str);
    s=str;
    p=str1;
    while(*s)
    {
        if(*s=='t'&&*(s+1)=='h'&&*(s+2)=='e')
        {
        *s++;
        *s++;
        *s++;

        }
        else
            *p++=*s++;

    }
    *p='\0';
    printf("\nsetences  after  \n");
    puts(str1);
}

g sum my method
int main()
{
    char name[80],final[40];
    char *n,*f;
    int count=0;

    n=name;
    f=final;
    printf("enter first name middle name sur name\n");
    gets(name);

    while(*n)
    {
if(count==0)
{
  *f=*n;
f++;
*f='.';
f++;
n++;
count++;
}

       if(count<3&&*n!=' ')
       {
           n++;

       }
       if(count<3&&*n==' ')
       {
           n++;
           *f=*n;

           count++;
           n++;
           f++;
           if(count==1||count==2)
           {

           *f='.';
           *f++;
           }
       }
       if(count==3&&*n!=' ')
          {
            *f=*n;
                n++;
                f++;
          }
}
*f='\0';
puts(final);
}


g sum let us c method

int main()
{
    char str[30];
    char *p;
    int count=0,l;
    printf("\n enter name,middle name and sur name\n");
    gets(str);
    p=str;
    while(*p)
    {
        if(*p==' ')
            count++;
        p++;
    }
    p=str;
    printf("the converted initials are\n");
    while(count)
    {
        printf("%c.",*p);
        while(*p!=' ')
            p++;
        p++;
        count--;
    }
    printf("%s\n",p);

}*/
let us c i sum

void  convert(long,char[]);

char *one[]={"","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","ninteen"};

char *ten[]={"","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};

int main()
{
    long num;
    printf("\nenter any number (max 9 digits)");
    scanf("%ld",&num);

    if(num<=0)
        printf("no negative numbers please...\n");
    else
    {
        convert((num/10000000),"crore");
        convert(((num/100000)%100),"lakh");
        convert(((num/1000)%100),"thousand");
        convert(((num/100)%10),"hundred");
        convert((num%100),"");
    }

}

 void convert(long n,char *s)
 {
     if(n>19)
     printf("%s%s",ten[n/10],one[n%10]);
     else
        printf("%s",one[n]);
     if(n)
        printf("%s",s);

                }


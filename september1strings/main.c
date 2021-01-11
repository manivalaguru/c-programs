#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    char    name[25];
    printf("enter   your    full    name:");
    gets(name);

    puts(name);
}


int main()
{
    char    str1[10];
    char    str2[10];
    char    *s="good morning";
    char    *q;
    q=s;
    str2=str1;
    while(*q!=0)
    {
    printf("%c",*q);
    q++;
    }
}
void    xstrcpy(const   char*,char*);
int main()
{
    char    source[]="sayonara";
    char    target[20];
    xstrcpy(source,target);
    printf("sourcestring=%s\n",source);
    printf("targetstring=%s\n",target);
}
void    xstrcpy(const   char    *s,char *t)
{

    while(*s!=0)
    {
        *t=*s;
        s++;
        t++;
    }
*t='\0';
}




int main()
{
    int i=0;
    char    str[]="quest";
    char    *p="quest";



    *str='z';
    while(i<=4)
    {
        printf("%c",str[i]);
        i++;
    }
    p++;
    p++;
printf("\n%c",*p);
}






void    xstrcat(char*,char*);
int main()
{
    char    source[]="folks!";
    char    target[30]="hello";
    xstrcat  (source,target);
    printf("surce   string=%s\n",source);
    printf("target  string=%s\n",target);
}
void     xstrcat(char   *s,char    *t)
{
    while(*s!=0)

    {
        *t=*t;
        t++;
        if(*t=='\0')
        {
            *t=*s;
            s++;
        }
    }
}


int    xstrcmp(char*,char*);
int main()
{
    char    string1[]="jerry";
    char    string2[]="jerry boy";
    int i,j,k;
    i=xstrcmp(string1,string2);
    printf("%d\n",i);
}
int    xstrcmp(char *s1,char    *s2)
{
    int k;
    while(*s1!='\0'||*s2!='\0')
    {
        if(*s1==*s2)
           {
        s1++;
        s2++;
           }
            if(*s1!=*s2)
        return  *s1-*s2;


}
return  0;

    }

int main()
{
    char    s[]="get organised !learn c";
    printf("%s\n",&s[2]);
    printf("%s\n",&s);
}


int main()
{
    char    s[]="rhruchgate:no chruch no gate";
    char t[25]="c";
    char *ss,*tt;
    ss=s;
    tt=t;

        if(*tt++==*ss++)
    printf("%s\n",t);
    else
    printf("%s\n",s);

}
int main()
{
    char    s[]="rhruchgate:no chruch no gate";
    char t[25]="c";
    char *ss,*tt;
    ss=s;
    tt=t;


        *tt++=*ss++;
    printf("%s\n",t);


}

int main()
{
    char str1[]={'m','a'};
    char    str2[]="hello";
    printf("%s\n",str1);
    printf("%s\n",str2);
}

int main()
{
    printf(5+"good morning");
    printf("%c\n","abcdefgh"[4]);
}
*/

int main()
{

}

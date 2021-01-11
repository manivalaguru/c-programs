#include <stdio.h>
#include <stdlib.h>
/*


my method

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



practice
int main()
{
    int len1,a,i;
    char str[]="to err is human";
    char str1[20];
    char    str2[100];
    printf("enter the substring\n");
    gets(str1);
    len1=strlen(str);

char *ss,*tt;
ss=str;

while(*ss!='\0')
{
    i=0;
while(*ss!=' '&&len1>=1)
{
    str2[i]=*ss;
  i++;
    ss++;
    len1--;

}
str2[i]='\0';

a=strcmp(str1,str2);
if(a==0)
{
printf("word %s is present in str",str1);
break;
}

ss++;

len1--;
}
printf("not found\n");
}
*/


void replace();

void main() {

char *str[] = {
  "mani kandan",
  "Move a mountain",
  "Level a building",
  "Erase the past",
  "Make a million",
  "...all through C !"
  };
char str1[80],str2[80];
int i;



printf("\n\n");

for(i=0;i<6;i++) {

printf("\t%s\n",*(str+i));

}

printf("\n\n");

printf("Enter the word to search: ");
gets(str1);

printf("\n\nEnter the word to replace: ");
gets(str2);



printf("\nBefore modification:\n\n");

for(i=0;i<6;i++) {

printf("\t%s\n",*(str+i));

}

/*******************************************/
/* passing all strings to replace function */
/*******************************************/

printf("\nAfter modification:\n\n");

for(i=0;i<6;i++) {

replace(*(str+i),str1,str2);

}

getch();

}

void replace(char *s, char s1[80], char s2[80]) {

int i=0,j=0,k=0;
char temp[100],temp2[100],main[100],*t=temp;


/* copying to temporary string */

while(*s!='\0') {

*t=*s;

t++;
s++;

}

*t='\0';

/**********************/
/* checking each word */
/**********************/


while(temp[i]!='\0') {

temp2[j]=temp[i];

if(temp[i]==' ') {

temp2[j]='\0';

if(strcmpi(temp2,s1)==0) {

strcpy(temp2,s2);

}

j=0;

while(temp2[j]!='\0') {

main[k]=temp2[j];

k++;
j++;
}

main[k]=' ';  /* adding space after each word is copied */

k++;     /* increment so that the next word won't replace the space */

j=-1;

}

i++;
j++;
}

temp2[j]='\0';              /* last word terminated */

if(strcmpi(temp2,s1)==0){    /* checking last word too */

strcpy(temp2,s2);

}

/***************************/
/* last word of the string */
/***************************/

j=0;

while(temp2[j]!='\0') {

main[k]=temp2[j];

k++;
j++;
}

main[k]='\0';   /* new string is completely ready */

printf("\t%s\n",main);       /* printing the new string */

}

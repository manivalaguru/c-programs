#include <stdio.h>
#include <stdlib.h>

/*



normal string reversal my method

char    rev(char    [],char  []);
int main()
{

    char    arr[]="mani";
    char    temp[10];

    rev(arr,temp);
    printf("string=%s",temp);
}

char    rev(char    r[],char t[])
{
    int length,i=0;
    length=strlen(r);
    while(length>=0)
    {
t[length-1]=r[i];
i++;
length--;
    }
    return  t;

}



string reversal using 2 two dimensional array
int main()

    {

char s[3][45] = {
"To err is human",
"But to really mess up things...",
"One needs to know C!!"
};
int i,j,len1;
char    temp[3][45];
for(i=0;i<=2;i++)
{
    len1=strlen(s[i]);
    for(j=0;len1>=0;j++)
    {
       temp[i][len1-1]=s[i][j];
       len1--;
    }
}
for(i=0;i<=2;i++)
    printf("%s\n",temp[i]);
    }

reverse the values my method
int main()

    {
int len1,i,j;
char *s[] = {
"To err is human",
"But to really mess up things...",
"One needs to know C!!"
};
char    *temp;
char    m[50];

for(i=0;i<=2;i++)
{
    temp=*(s+i);
    for(len1=strlen(s[i]),j=0;len1>=1;len1--,j++)
    {
        m[j]=*(temp+(len1-1));



    }

    *(s+i)=m;

        printf("%s\n",s[i]);
}


    }



same as previous
    int main()

    {
int len1,i,j;
char *s[] = {
"To err is human",
"But to really mess up things...",
"One needs to know C!!"
};
char    *temp;
char    m[50];

for(i=0;i<=2;i++)
{
    temp=*(s+i);

    for(len1=strlen(s[i]),j=0;len1>=1;len1--,j++)
    {
        m[j]=*(temp+(len1-1));



    }
m[j]='\0';
    *(s+i)=m;
      printf("%s\n",s[i]);

}



    }



1st guy method not working
void main() {

char *s[]={"To err is human....",
    "But to really mess up things up...",
    "One needs to know C!!"
    };
int i;



printf("REVERSED strings\n\n\n\n");


xstrrev(*s);
printf("%s\n\n",*s);

xstrrev(*(s+1));
printf("%s\n\n",*(s+1));

xstrrev(*(s+2));
printf("%s\n\n",*(s+2));


getch();

}
xstrrev( char *s) {

int i=0;
char target[100],*t=target;



while(*s!='\0') {

i++;
s++;

}



while(i>=0) {

s--;

*t=*s;

t++;
i--;

}

*t='\0';


while(target[i]!='T') {

*s=target[i];

i++;
s++;

}


return *s;
}
2nd guy method not working
int main()
{
	char *s[] = {
		"To err is human",
		"But to really mess up things...",
		"One needs to know C!!"
	};




	char *p;

	for (int i = 0; i <= 2; i++)
	{
		p = (char*)malloc(sizeof(strlen(s[i]) + 1));
		strcpy(p, s[i]);
		_strrev(p);
		s[i] = p;
		puts(s[i]);
	}


}

let us c method not working
*/
void Xstrrev(char *ss);
int main()
{
   static char *s[] = {
	"To err is human",
	"But to really mess up things...",
	"One needs to know C!!"
};
int i;
for(i=0;i<=2;i++)
{
    xstrrev(s[i]);
    printf("%s\n",s[i]);

}
return 0;

}

void xstrrev(char *ss)
{
    int l,i;
    char *tt,temp1;
    char target[100],*temp=target;
    l=strlen(ss);
    tt=ss+l-1;
    for(i=1;i<=l/2;i++)
    {
        temp1=*ss;
        *temp=*tt;

        ss++;
        tt--;
    }
return  *temp;
}

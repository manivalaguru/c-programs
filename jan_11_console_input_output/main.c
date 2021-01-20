#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

/*int main()
{
    char accel[20];
   float alt[3];
   alt[0]=0.5;
   alt[1]=0.7;
   alt[2]=0.9;

   sprintf(accel,"%0.2f%0.2f%0.2f\n",alt[0],alt[1],alt[2]);
   printf("%s\n",accel);

}

int main()
{
    char *str = "Tom Manager 28";
    char name[10], designation[10];
    int age, ret;

    ret = sscanf(str, "%s %s %d", name, designation, &age);

    printf("Name: %s\n", name);
    printf("Designation: %s\n", designation);
    printf("Age: %d\n", age);

    // signal to operating system program ran fine
    return 0;
}



int main()
{
    int dd,mm,yy;
    printf("enter day month and year\n");
    scanf("%d%*c%d%*c%d",&dd,&mm,&yy);
    printf("the date is %d -%d -%d\n",dd,mm,yy);
}




float getfloat();
int main()
{
    float floatresult=0.0f;
    floatresult=getfloat();
    printf("after converting string to floar result is:");
    printf("%0.2f\n",floatresult);
}
float getfloat()
               {

                char str[]="1234.56";
                float temp=0.0f,result=0.0f;
                int i,j,decimal;
                for(i=0;str[i]!='.';i++)
                    result=(result*10)+str[i]-'0';
                decimal=1;
                for(j=i+1;str[j]!='\0';j++)
                {
                    temp=str[j]-'0';
                    decimal=decimal*10;
                    temp=temp/decimal;
                    result=result+temp;
                }
                return result;


int main()
{
    printf("%-30s%-20s%-10.2f\n","mani","embedded developer",425.50);
            printf("%-30s%-20s%-10.2f\n","vijay","embedded developer",4325.50);
}

           }






char p[]="the sixth sick sheikh's sixth ship is siCk";
int main()
{
    int i=0;
    while(p[i]!='\0')
    {
        putchar(p[i]);
        i++;
    }
}


int main()
{
    char footballer[40];
    puts("enter namee");
    gets(footballer);
    puts("happy footballing!");
    puts(footballer);
    return 0;
}





int main()
{
    int a;
    printf("\n enter a numeric string...");
    a=getint();
    printf("\nyou entered %d\n",a);
    return 0;
}

int getint()
{
    char str[6];
    int i,j,k,val;
    i=0;
    while(i<=5)
    {
        str[i]=getche();
        if(str[i]=='\r')
        {
            str[i]=='\0';
            break;
        }
        if(str[i]=='\b')
        {
            i--;
            printf("\b");

        }
        else
            i++;
    }
    val=0;
    k=1;
    for(j=i-1;j>=0;j--)
    {
        val=val+(str[j]-48)*k;
        k=k*10;
    }
    return(val);
}
*/

void xputs(char*);
void xgets(char*);
int main()
{
    char sent[100];
    xputs("enter a sentence ");
    xgets(sent);
    printf("\n\n");
    xputs(sent);

}
void xputs(char *s)
{
    while(*s)
    {
        putch(*s);
        s++;
    }
}

void xgets(char *s)
{
    int i;
    char ch;
    for(i=0;i<=98;i++)
    {
        ch=getche();
        if(ch=='\r')
        {
            *s='\0';
            break;

      }
        if(ch=='\b')
        {
            printf("\b");
            i--;
            s--;
        }
        else
        {
            *s=ch;
            s++;
        }
    }
}

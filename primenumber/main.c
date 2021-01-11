#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int num,i;
    printf("enter   the number\n");
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            printf("not a   prime   number\n");
            break;
        }

        }
        if(i==num)

        printf("prime   number\n");
    }

*/
int main()
{
    int num,i;
    printf("enter   the number\n");
    scanf("%d",&num);

    i=2;
    while(i<num)
    {
        if(num%i==0)
        {
            printf("not prime\n");
            break;
        }
        i++;
    }
    if(i==num)
        printf("prime   number\n");
}

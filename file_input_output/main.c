#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    int nol=0,not=0,nob=0,noc=0;
    fp=fopen("qsort.c","r");
    while(1)
    {

        ch=fgetc(fp);
        if(ch==EOF)
            break;
            noc++;
            if(ch==' ')
                nob++;
            if(ch=='\n')
                nol++;
            if(ch=='\t')
                not++;

    }

    fclose(fp);
    printf("number of charcters =%d\n",noc);
    printf("number of blanks=%d\n",nob);
    printf("number of tabs =%d\n",not);
    printf("number of linrs =%d\n",nol);
    return 0;
}

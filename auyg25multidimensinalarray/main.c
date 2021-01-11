#include <stdio.h>
#include <stdlib.h>
#include    <math.h>
/*
int main()
{
    static  int a[]={0,1,2,3,4};
    int *p[]={a,a+1,a+2,a+3,a+4};
    printf("%u\n%u\n%d\n",p,*p,*(*p));
}
int main()
{
    int arr[3][2][3]={{{2,4,5},{5,5,5}}
    ,{{2,4,5},{5,5,5}}
    ,{{2,4,5},{5,5,55}}};

    printf("%d\n%d",arr[0][0][0],arr[2][1][2]);
}


int main()
{
    int k,i,j;
    int arr[5][5]={
        {1,2,3,4,5},
    {6,7,8,9,10},
    {11,12,13,14,15},
    {21,22,23,24,125},
    {16,17,18,19,20}
    };
            k=arr[0][0];
            for(i=0;i<=4;i++)
            {
                for(j=0;j<=4;j++)
                {
                    if(k>=arr[i][j])
                        k=k;
                    else
                        k=arr[i][j];
                }
            }

            printf("highest     value   in  this    matrix=%d",k);


}


int main()
{
    int i,j;
   int  t[4][4];
    int arr[4][4]={
        {1,2,3,4},
    {6,7,8,9},
    {11,12,13,14},
    {21,22,23,24}
    };

    for(i=0;i<=3;i++)
    {
     for(j=0;j<=3;j++)
     {
         t[i][j]=arr[j][i];
     }
    }
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            printf("%d\n",t[i][j]);
        }
    }
}


int main()
{

int t[3][3];
    int mat[3][3],i,j,sym=0;


    printf("enter   the values  of  matrix\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
            scanf("%d",&mat[i][j]);
    }
    printf("\nenter matrix  is:\n");

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)

            printf("%d\n",mat[i][j]);


    }


for(i=0;i<=2;i++)
{
    for(j=0;j<=2;j++)
    {
        t[i][j]=mat[j][i];
    }
}


    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
         if(mat[i][j]==t[i][j])
         {
          sym=sym+1;

         }
        }
    }
if(sym==9)
{
printf("matrix  is  symmetrical\n");
}
else
    printf("not symetrical\n");

}

int main()
{
    int i,j;
    int mani[2][2],nithya   [2][2];
       printf("enter   the values  of   1st  matrix\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
            scanf("%d",&mani[i][j]);
    }
    printf("\nenter the 2nd matrix  is:\n");

    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)

            scanf("%d",&nithya[i][j]);

           }

           printf("value    at  mani    matrix  is\n");
            for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)

            printf("%d\n",mani[i][j]);


    }

           printf("value    at  nithya    matrix  is\n");
            for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)

            printf("%d\n",nithya[i][j]);

}
for(i=0;i<=1;i++)
{
    for(j=0;j<=1;j++)
    {
        mani[i][j]=mani[i][j]+nithya[i][j];
    }
}
 printf("value    at  mani    matrix  is\n");
            for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)

            printf("%d\n",mani[i][j]);


    }
}

int   main()
{
    int mat1[3][3],mat2 [3][3],mat3 [3][3],temp=0;

    int i,j,k;

    printf("enter   the values  for mat1\n");

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
  printf("values    of  mat 1   is\n");
     for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d\n",mat1[i][j]);
        }
    }


    printf("enter   the values  for mat2\n");

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
  printf("values    of  mat 2   is\n");
     for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d\n",mat2[i][j]);
        }
    }
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++,temp=0)
        {
           for(k=0;k<=2;k++)
           {
               mat3[i][j]=temp+(mat1[i][k]*mat2[k][j]);
               temp=mat3[i][j];

           }
        }
    }

 for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d\n",mat3[i][j]);
        }
    }

}

int left=-1;
int right=-1;
int k;

  int i;

int value(int);
int operation(int);

int insertright(int);
int deleteright(int);
int insertleft(int);
int deleteleft(int);
int main()

{



    operation(i);

}

int operation(int  x )
{

    printf("enter     1   for left    insert\n2     for    left    delete  \n3   for right   insert  \n4   for right   delete\n");
    scanf("%d",&x);
    if(x==1)
         insertleft(x);
        else    if(x==2)
        deleteleft(x);
    else    if(x==3)
        insertright(x);
        else    if(x==4)
            deleteright(x);

}
int insertleft(int  x)
{
if(left==-1&&right==-1)
{
    left=left+1;
    right=right+1;

}
else    if(left==(right-1))
{
    left=left-1;

}
else    if(left==0&&right!=5)
{
    left=5;
}
value(k);
}

int insertright(int  x)
{
    right=right+1;
    value(k);
}
int deleteright(int x)
{
    left=left+1;

}
int deleteleft(int  x)
{
    if(left==5)
        left=0;
    else
        right=right-1;


}
int value(int   k)
{
      int queue[5];
      printf("enter the queue   value\n");
    scanf("%d",&k);
   queue[left]=k;
     operation(i);

}

int main()
{
    int n=11,i,j;
    float   x[11]={34.22,39.87,41.85,43.23,40.06,53.29,53.29,54.14,49.12,40.71,55.15};
    float   y[11]={102.43,100.93,97.43,97.81,98.32,98.32,100.07,97.08,91.59,94.85,94.65};

    float   r;
    float   sx=0.0,sxy=0.0,sy=0.0,sxs=0.0,sys=0.0;
    float   r1,r2;

    for(i=0;i<=10;i++)
    {
        sx=sx+x[i];
        sxy=sxy+x[i]+y[i];
        sy=sy+y[i];
        sxs=sxs+x[i]*x[i];
        sys=sys+y[i]*y[i];
    }
    printf("\n\n%cX=%.2f\n",228,sx);
    printf("%cY=%.2f\n",228,sy);
    printf("%cXY=%.2f\n",228,sxy);
    printf("%cX*X=%.2f\n",228,sxs);
    printf("%cY*Y=%.2f\n",228,sys);
    r1=(sxy-sx*sy);
    r2=(sqrt((n*sxs-sx*sx)*(n*sys-sy*sy)));

r=r1/r2;
printf("\n\n(num)r1=%f\n",r1);
printf("\n\n(d)r2=%f\n",r2);
printf("\n\n(co)r1/r2=%f\n",r);
}


int main()
{
    int n=10,i;
    float   x[10]={3.0,4.5,5.5,6.5,7.5,8.5,8.0,9.5,10.0};
    float   y[10]={1.5,2.0,3.5,5.0,6.0,7.5,9.0,10.5,12.0,14.0};
    float   y1;
      float   sx=0.0,sxy=0.0,sy=0.0,sxs=0.0;

      float a,b,b1,b2,my,mx;

       for(i=0;i<=9;i++)
    {
        sx=sx+x[i];
        sxy=sxy+x[i]+y[i];
        sy=sy+y[i];
        sxs=sxs+x[i]*x[i];

    }
    printf("\n\n%cX=%.2f\n",228,sx);
    printf("%cY=%.2f\n",228,sy);
    printf("%cXY=%.2f\n",228,sxy);
    printf("%cX*X=%.2f\n",228,sxs);

    my=sx/n;
    mx=sx/n;
    b1=((n*sxy)-(sx*sy));
    b2=((n*sxs)-(sx*sx));
    b=b1/b2;

    a=my-(mx*b);




    printf("\n\na=%f\n",a);
    printf("\n\nb=%f\n",b);
}

int main()
{
    float   sq,value;
    int n=20,i,mean;
    int std[20]={9,2,5,4,12,7,8,11,9,3,7,4,12,5,4,10,9,6,9,4};
            int sx=0,sy=0;

    for(i=0;i<=19;i++)
    {
        sx=sx+std[i];
    }
mean=sx/n;
for(i=0;i<=19;i++)
{
    sy=sy+((std[i]-mean)*(std[i]-mean));
}
sq=sy/20;

value=sqrt(sq);
printf("value=%f\n",value);
}


int main()
{
    int i,plot;
    float   area[6],largest;
    float a[6]={137.4,155.2,149.3,160.0,155.6,149.7};
    float   b[6]={80.9,92.62,97.93,100.25,68.95,120.0};
    float   angle[6]={0.78,0.89,1.35,9.00,1.25,1.75};

    for(i=0;i<=5;i++)
    {
        area[i]=(a[i]*b[i]*sin(angle[i]))/2;
    }

    for(i=0;i<=5;i++)
    {
        if(area[i]>largest)
            largest=area[i];
            plot=i;
    }
            printf("\n\n    enter   plot    dimensions  and res[pective area    is\n");
            printf("\nplt no\ta\b\tangle\tarea");
            for(i=0;i<=5;i++)
            {
                printf("\n%d\t\t%.2f\t%.2f\t%.2f\t%.3f",i+1,a[i],b[i],angle[i],area[i]);

            }

            printf("\n\na=%f\tb=%f\tangle=%f",a[plot],b[plot],angle[plot]);

}
*/

int main()
{
    int i,x[10],y[10];
    float   sum=0;

    printf("enter   the coordinates\n");
    for(i=0;i<=9;i++)
    {
        printf("\nX[%d]=",i+1);
        scanf("%d",&x[i]);
        printf("\nY[%d]=",i+1);
        scanf("%d",&y[i]);
    }
        for(i=0;i<=8;i++)
            sum=sum+sqrt(pow((x[i+1]-x[i]),2)+pow((y[i+1]-y[i]),2));

        printf("\n  distance=%f",sum);

}

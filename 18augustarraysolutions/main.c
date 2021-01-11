#include <stdio.h>
#include <stdlib.h>

/*
for doubt
int main()
{
    int arr[]={10,20,30,45,67,56,74};
    int i=4,*j,*k,*x,*y;
    x=&arr[1];
    y=&arr[5];
    printf("%d\n",y-x);
    j=&arr[4];
    k=(arr+4);
    if(j==k)
        printf("samelocation\n");
    else
        printf("different   lopcation\n");
}
1st sum my  method

int main()
{
    int i,j,k=0;
    int change[6]={01,11,21,31,41,51};
    printf("arrays before interchanging is\n");
    for(i=0;i<=5;i++)

    {
        printf("a[%d]=%d\n",i,change[i]);
    }
for(j=0;j<=5;j=j+2)
{
    k=change[j];

    change[j]=change[j+1];
    change[j+1]=k;
}

printf("arrays   after   interchanging\n");
 for(i=0;i<=5;i++)

    {
        printf("a[%d]=%d\n",i,change[i]);
    }
}
second    sum (b)   my  method
int main()
{
    int i,j,k;
    int first[6]={11,22,33,44,55,66};
    int second[6]={10,20,20,40,50,60};

    printf("before  interchanging\n");

    for(i=0;i<=5;i++)
    {
        printf("a[%d]=%d    ",i,first[i]);
        printf("a[%d]=%d\n",i,second[i]);
    }


    for(i=0,j=5;i<=5,j>=0;i++,j--)
    {
        k=first[i];
        first[i]=second[j];
        second[j]=k;
    }

 printf("after interchanging\n");

    for(i=0;i<=5;i++)
    {
        printf("\na[%d]=%d    ",i,first[i]);
        printf("a[%d]=%d\n",i,second[i]);
    }
}

b   sum let us  c   method
int main()
{
    int arr1[5],arr2[5],i,j;

    printf("\nenter the 5   elements    of  array\n");
    for(i=0;i<=4;i++)
        scanf("%d",&arr1[i]);
    for(i=0,j=4;i<=4;i++,j--)
        arr2[j]=arr1[i];
        printf("\nelements  in  reverse order\n");

        for(i=0;i<=4;i++)
            printf("%d\n",arr2[i]);


}
c   sum let us  c
int main()
{
    int arr[5],i,num,j=0;
    printf("enter   the 25  elements\n");

    for(i=0;i<=4;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("enter   the number  to  be  searched\n");
    scanf("%d",&num);
    for(i=0;i<=4;i++)
    {
        if(num==arr[i])
        {
            j++;
        }
    }
    printf("the number  of  times   entered=%d",j);
}

int main()
{
    int arr[5],i,pos=0,neg=0,zero=0,even=0,odd=0;
    printf("enter   the 25  elements\n");

    for(i=0;i<=4;i++)
    {
        scanf("%d",&arr[i]);
    }
for(i=0;i<=4;i++)
    {
        if(arr[i]/2==0)
        {
            even++;
        }
        if(arr[i]/2!=0)
        {
            odd++;
        }
        if(arr[i]>0)
        {
            pos++;
        }
        else    if(arr[i]<0)
        {
            neg++;
        }
        else    if(arr[i]==0)
        {
            zero++;
        }
    }
    printf("even=%d\n",even);
    printf("odd=%d\n",odd);
    printf("zero=%d\n",zero);
    printf("positive=%d\n",pos);
    printf("neg=%d",neg);
}

int main()
{
    int max,i,j,*p;
    printf("enter   array   size");
    scanf("%d",&max);
    p=(int*)malloc(max*sizeof(int));
    printf("enter   the array   values\n");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&p[i]);
    }
for(i=0,j=1;i<=2,j<=3;i++,j++)
{
    if(p[i]==p[max-j])
    {
        printf("%d&%dsame",p[i],p[max-j]);
    }
}
}



int main()
{
    int arr[10],i,j;
    printf("enter   10  elements    of  array\n");
    for(i=0;i<=9;i++)
        scanf("%d",&arr[i]);
           for(i=0;i<=9;i++)
           {
               if(arr[i]==arr[10-(i+1)])
               printf("%d\n",arr[i]);

           }

}


int   smallest(int*,int,int*);
int main()
{
    int num[24],i,small;
    printf("enter   the values  in  array\n");
    for(i=0;i<=24;i++)

    {
        scanf("%d",&num[i]);
    }
    smallest(&num[0],25,small);
      printf("smallest=%d",small);
}
int smallest(int*    num,int  n,int*   sml)
{
    int i;
    for(i=0;i<=n-2;i++)
    {
        if(num[i]<num[i+1])
        {
            num[i+1]=num[i];



        }

    }


}

int main()
{
    int arr[4],i,n;
    printf("\nenter elements    in  array\n");
    for(i=0;i<=4;i++)
        scanf("%d",&arr[i]);
    n=arr[0];
    for(i=0;i<=4;i++)
    {
        if(arr[i+1]<n)
            n=arr[i];
    }
    printf("smallest=%d\n",n);
}

int main()
{
    int arr[4],i,n;
    printf("\nenter elements    in  array\n");
    for(i=0;i<=4;i++)
        scanf("%d",&arr[i]);
    n=*arr;
    for(i=0;i<=4;i++)
    {
        if(*(arr+i)<n)
            n=*(arr+i);
    }
    printf("smallest=%d\n",n);
}


int    modify(int[],int);
int main()
{
    int i;
    int mani[10]={10,20,30,40,50,60,70,80,90,100};
    modify(&mani[0],10);

    for(i=0;i<=9;i++)
    {

printf("%d\n",mani[i]);
    }

}
int modify(int  j[],int n)
{
    int i;
    for(i=0;i<=n-1;i++)
    {
        j[i]=j[i]*3;
    }

}



int main()
{
    int a[25],i,j,k,t;

    printf("\nenter 25  numbers\n");
    for(i=0;i<=4;i++)
    scanf("%d",&a[i]);
    for(i=1;i<=4;i++)
    {
        t=a[i];
        for(j=0;j<i;j++)
        {
            if(t<a[j])
            {
                for(k=i;k>=j;k--)
                    a[k]=a[k-1];
                a[j]=t;
                break;
            }
        }
    }
    printf("\n  sorted  numbers are\n");
    for(i=0;i<=4;i++)
        printf("%d\n",a[i]);
}
*/

int main()
{
    int k;
    int sort[5]={44,33,55,22,11};
    for(int i=0;i<=4;i++)
    {
      for(int   j=0;j<=4;j++)
      {

          if(sort[i]<sort[j])
          {
              k=sort[i];

              sort[i]=sort[j];
              sort[j]=k;

          }
      }

    }
    for(int i=0;i<=4;i++)
    {
        printf("%d\n",sort[i]);
    }
}

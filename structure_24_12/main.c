#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/*int main()
{
  struct student
  {
    int roll_no;
    char name[30];
    int phone_number;
  };
  struct student p1 = {1,"Brown",123443};
  struct student p2, p3;
  p2.roll_no = 2;
  strcpy(p2.name,"Sam");
  p2.phone_number = 1234567822;
  p3.roll_no = 3;
  strcpy(p3.name,"Addy");
  p3.phone_number = 1234567844;
  printf("First Student\n");
  printf("roll_no : %d\n", p1.roll_no);
  printf("name : %s\n", p1.name);
  printf("phone_number : %d\n", p1.phone_number);
  printf("Second Student\n");
  printf("roll_no : %d\n", p2.roll_no);
  printf("name : %s\n", p2.name);
  printf("phone_number : %d\n", p2.phone_number);
  printf("Third Student\n");



  printf("roll_no : %d\n", p3.roll_no);
  printf("name : %s\n", p3.name);
  printf("phone_number : %d\n", p3.phone_number);
  return 0;
}

    int main()
    {
        struct student
        {
         int rollno;
char name[10];
int year;

        };
        struct student p1={1,"brown",123443};
        struct student p2;
        p2=p1;
         printf("rollno : %d\n", p1.rollno);
            printf("name : %s\n", p1.name);
         printf("year : %d\n", p1.year);

          printf("rollno : %d\n", p2.rollno);
            printf("name : %s\n", p2.name);
         printf("year : %d\n", p2.year);
    }



//let us c 1st sum
   struct students
    {
        int rollno;
        char name[40];
        char dept[20];

        int year;
    }; struct students a[450];


void display1(struct students a[],int n)
    {
        int i;int dh;
        for(i=1;i<=n;i++)
        {
             printf("enter roll number,name,dept,year\n");
        scanf("%d%s%s%d",&a[i].rollno,&a[i].name,&a[i].dept,&a[i].year);

          while((dh=getchar())!='\n');
        }
    }


void print(struct students a[],int n)
{
    int i;
    for(i=1;i<=n;i++)
printf("%d%s%s%d\n",a[i].rollno,a[i].name,a[i].dept,a[i].year);

}


void year(struct students a[],int n)
{
    int i,k;
    printf("enter the desired year\n");
    scanf("%d",&k);
    for(i=1;i<=n;i++)
    {
        if(a[i].year==k)
        {
            printf("%s\n",a[i].name);
        }
    }
}
void roll(struct students a[],int n)
{
    int i,k;
    printf("enter the roll no print the details\n");
    scanf("%d",&k);
    for(i=1;i<=n;i++)
    {
        if(a[i].rollno==k)
        {
            printf("%d%s%s%d\n",a[i].rollno,a[i].name,a[i].dept,a[i].year);
        }
    }
}

int main()
{


    int i;
    display1(a,4);
    print(a,4);
year(a,4);
roll(a,4);



}

//let us c 2nd sum

 int withdraw_deposit;

struct bank
{
    int actnum;
    char name[100];
    int balance;
};struct bank a[200];

void display1(struct bank a[],int n)
    {
        int i;int dh;
        for(i=0;i<=n;i++)
        {
             printf("enter acct number,name,balance\n");
        scanf("%d%s%d",&a[i].actnum,&a[i].name,&a[i].balance);

          while((dh=getchar())!='\n')
            ;
        }
    }
void print(struct bank a[],int n)
{
    int i;
    for(i=0;i<=n;i++)
printf("%d%s%d\n",a[i].actnum,a[i].name,a[i].balance);

}



void lowbalance(struct bank a[],int n)
{
int i,k;
printf("account number and name of customer with balance less than 100 are\n");

for(i=0;i<=n;i++)
{
    if(a[i].balance<100)
    {
printf("%d%s",a[i].actnum,a[i].name);
    }
}
}
void withdrawal_or_deposit(struct bank a[],int n)
{
    int i,actno,amt,code;



    if(withdraw_deposit==1)\5z
    {


    printf("enter   the account number  to  enter   amount\n");
    scanf("%d",&actno);
for(i=0;i<=n;i++)
{
    if(a[i].actnum==actno)
    {
        printf("enter   the amount  to  be  deposited\n");
        scanf("%d",&amt);
        if(amt>100)
        {
            a[i].balance=a[i].balance+amt;
            printf("%d%s%d\n",a[i].actnum,a[i].name,a[i].balance);
        }
        else if(amt<100)
        {
            printf("please  enter     amount greater than 100\n");
        }
    }

}
    }
    else if(withdraw_deposit==0)
    {
        printf("enter   the account number\n");
    scanf("%d",&actno);


    for(i=0;i<=n;i++)
{
    if(a[i].actnum==actno)
    {
        printf("enter   the amount  to  be  withdraw\n");
        scanf("%d",amt);
        if(amt>100)
        {
            a[i].balance=a[i].balance-amt;
            printf("%d%s%d\n",a[i].actnum,a[i].name,a[i].balance);
        }
        else if(amt<100)
        {
            printf("please  enter     amount greater than 100\n");
        }
    }
    }

    }
}
int main()
{



    display1(a,1);
    print(a,1);
    lowbalance(a,1);
    printf("do you want you deposit or withdraw now 0 for Withdrawal 1 for deposit\n");
    scanf("%d",&withdraw_deposit);

    if(withdraw_deposit==0||withdraw_deposit==1)
    {
        withdrawal_or_deposit(a,2);
    }
    else
{

        printf("you may levae now\n");
}

}



//testing sorting
int values[] = { 88, 56, 100, 2, 25 };

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main () {
   int n;

   printf("Before sorting the list is: \n");
   for( n = 0 ; n < 5; n++ ) {
      printf("%d ", values[n]);
   }

   qsort(values, 5, sizeof(int), cmpfunc);

   printf("\nAfter sorting the list is: \n");
   for( n = 0 ; n < 5; n++ ) {
      printf("%d ", values[n]);
   }

   return(0);
}


//let us c 4th sum
struct players {
   char  name[50];
   int  age;
   int match;
   int average;
};

   struct players player[4];
int struct_cmp_by_avg(const void *a, const void *b)
{
    struct players *ia = (struct players *)a;
    struct players *ib = (struct players *)b;
    return (int)(100.f*ia-> average- 100.f*ib->average);

}


int main( ) {
int i;


   strcpy( player[1].name, "dhoni");
    player[1].age= 39;
    player[1].match=405;
    player[1].average=45;

    strcpy( player[2].name, "kohli");
    player[2].age= 32;
    player[2].match=305;
    player[2].average=42;

    strcpy( player[3].name, "jadeja");
    player[3].age= 29;
    player[3].match=205;
    player[3].average=47;

     strcpy( player[4].name, "rahane");
    player[4].age= 26;
    player[4].match=105;
    player[4].average=55;



    for(i=1;i<=4;i++)
    {
        printf("%s%d%d%d\n",player[i].name,player[i].age,player[i].match,player[i].average);
    }

    size_t structs_len = sizeof(player) / sizeof(struct players);



      qsort(player, structs_len, sizeof(struct players), struct_cmp_by_avg);
          for(i=1;i<=4;i++)
    {
        printf("%s%d%d%d\n",player[i].name,player[i].age,player[i].match,player[i].average);
    }
}

//let us c 3 rd sum

struct automobile {
   int  name;
   int  year;
   char material[50];
   int quantity;
};

   struct automobile list[4];
void serial_number_print(struct automobile list[],int n)
{
    int i,k;

    for(i=1;i<=4;i++)
    {
        if((list[i].name>=0xaa2)&&(list[i].name<=0xaa3))
        {
            printf("Name:%x:year:%d,material:%s,quantity:%d\n",list[i].name,list[i].year,list[i].material,list[i].quantity);
    }
        }

}

int main( )
{
int i;

list[1].name=0xaa1;
    list[1].year= 2010;
   strcpy( list[1].material, "silk");
    list[1].quantity=45;

   list[2].name=0Xaa2;
    list[2].year= 2017;
   strcpy( list[2].material, "wood");
    list[2].quantity=55;

    list[3].name=0Xaa3;
    list[3].year= 2020;
   strcpy( list[3].material, "gold");
    list[3].quantity=65;

    list[4].name=0Xaa4;
    list[4].year= 2025;
   strcpy( list[4].material, "silver");
    list[4].quantity=75;



    for(i=1;i<=4;i++)
    {
        printf("Name:%x,year:%d,material:%s,quantity:%d\n",list[i].name,list[i].year,list[i].material,list[i].quantity);
    }
    serial_number_print(list,4);
}



//lets us c 5th sum
struct date
    {
int day;
int month;
int year
};


struct employee {
   int  code;
   char  name[20];
  struct date doj;
};
struct employee list[4];

int main( )
{
int i;

list[1].code=27;
   strcpy( list[1].name,"mani");
   list[1].doj.day=25;
   list[1].doj.month=11;
   list[1].doj.year=2010;

list[2].code=28;
   strcpy( list[2].name,"pavithra");
   list[2].doj.day=20;
   list[2].doj.month=10;
   list[2].doj.year=2015;

   list[3].code=26;
   strcpy( list[3].name,"praveen");
   list[3].doj.day=25;
   list[3].doj.month=11;
   list[3].doj.year=2019;

   list[4].code=25;
   strcpy( list[4].name,"arun");
   list[4].doj.day=25;
   list[4].doj.month=11;
   list[4].doj.year=2014;


    for(i=1;i<=4;i++)
    {
        printf("code:%d,name:%s,day:%d,month:%d,year:%d\n",list[i].code,list[i].name,list[i].doj.day,list[i].doj.month,list[i].doj.year);
    }
        tenure(list,4);

}

void tenure(struct employee list[],int n)
{
    int year,i,current_year;
    printf("enter the current year\n");
    scanf("%d",&year);
    for(i=1;i<=n;i++)
    {
        current_year=year;
       current_year=current_year-list[i].doj.year;
       if(current_year>=3)
       {
          printf("code:%d,name:%s,day:%d,month:%d,year:%d\n",list[i].code,list[i].name,list[i].doj.day,list[i].doj.month,list[i].doj.year);
       }
    }
}

//lets uc c 7th sum

struct date
    {
int day;
int month;
int year
};
struct date compare[2];
int main( )
{

int i,k;
compare[1].day=25;
compare[1].month=11;
compare[1].year=2020;


compare[2].day=25;
compare[2].month=11;
compare[2].year=2019;

k=calendar_compare(compare,2);
if(k==0)
    printf("returned 0\n");
if(k==1)
    printf("returned 1\n");
}

int calendar_compare(struct date compare[],int n)
{
    if(compare[1].year==compare[2].year)
    {
        if(compare[1].month==compare[2].month)
        {
            if(compare[1].day==compare[2].day)
                return 0;
        }
    }
    else
        return 1;
}





*/
// lets us c 6th sum

 struct library
{
    int acession_number;
    char tittle_of_the_book[30];
    char author_name[30];
    int price;
    int availability;  //0 0r 1


};
struct library details[30];

void add_book_info();
void books_of_particular_author();
 void display_book_info();
 void title_of_the_specified_book();
void number_of_books();
void order_of_accession_number();

  size_t structs_len = sizeof(details) / sizeof(struct library);

int is_any_book_there=1;
int i=1;
int count;

int main()

{
    int choice;
    while(1)
    {

    printf("1.ADD BOOK INFROMATION\n");
    printf("2.DISPLAY BOOK INFROMATION\n");
    printf("3.LIST ALL THE BOOKS OF GIVEN AUTHOR\n");
    printf("4.LIST THE TITLE OF SPECIFIED BOOK\n");
    printf("5.COUNT THE NUMBER OF THE BOOKS IN THE LIBRARY\n");
    printf("6.LIST THE BOOKS IN ORDER OF ACESSION NUMBER\n");
    printf("7.EXIT\n");
    choice = input();


switch (choice) {
    case 1:
         {
             add_book_info();
             break;

         }

          case 2:
         {
             display_book_info();
             break;

         }
         case 3:
         {
             books_of_particular_author();
             break;

         }
         case 4:
         {
             title_of_the_specified_book();

             break;

         }
         case 5:
            {

         number_of_books();
         break;
            }

         case 6:
         {
    order_of_accession_number();
         }

         case 7:
            exit(0);

}
    }
}

int input()
{
    int number;
    scanf("%d", &number);
    return (number);
}


void add_book_info()
{
int dh;
    printf("1.ENTER THE ACESS NUMBER\n2.TITLE OF THE BOOK\n3.AUTHOR NAME\n4.PRICE OF THE BOOK\n5.AVALIBALITY(stock)\n ");
scanf("%d%s%s%d%d",&details[i].acession_number,&details[i].tittle_of_the_book,&details[i].author_name,&details[i].price,&details[i].availability);
//while((dh=getchar())!='\n');
i++;
is_any_book_there++;

}

void display_book_info()
{
    int j;
    if(is_any_book_there<=1)
    {
        printf("atleast add any one book\n\n\n");

    }
    else
    {
        printf("the books present in this library are\n");
        for(j=1;j<is_any_book_there;j++)
        {
            printf("Acesssion number:%d\nTitle:%s\nAuthor Name:%s\nPrice:%d\nAvailability:%d\n",details[j].acession_number,details[j].tittle_of_the_book,details[j].author_name,details[j].price,details[j].availability);
        }
    }

}


void books_of_particular_author()
{
    int j;
    char name[30];
    printf("enter the author name\n");
scanf("%s",&name);

    for(j=1;j<is_any_book_there;j++)
        {
            if(strcmp(name,details[j].author_name)==0)
            {
            printf("Acesssion number:%d\nTitle:%s\nAuthor Name:%s\nPrice:%d\nAvailability:%d\n",details[j].acession_number,details[j].tittle_of_the_book,details[j].author_name,details[j].price,details[j].availability);
            }
        }

}
void title_of_the_specified_book()
{
    int access_number,j;
    printf("enter the access number\n");
    scanf("%d",&access_number);

     for(j=1;j<is_any_book_there;j++)
        {
            if(access_number==details[j].acession_number)
            {
                printf("%s\n",details[j].tittle_of_the_book);

            //printf("Acesssion number:%d\nTitle:%s\nAuthor Name:%s\nPrice:%d\nAvailability:%d\n",details[j].acession_number,details[j].tittle_of_the_book,details[j].author_name,details[j].price,details[j].availability);
            }
}
}

void number_of_books()
{
    int j;
     for(j=1;j<is_any_book_there;j++)
        {
            count+=details[j].availability;
           // printf("Acesssion number:%d\nTitle:%s\nAuthor Name:%s\nPrice:%d\nAvailability:%d\n",details[j].acession_number,details[j].tittle_of_the_book,details[j].author_name,details[j].price,details[j].availability);

        }
         printf("number of books in this library is %d\n",count);
         count=0;
}

int struct_cmp_by_acession_number(const void *a, const void *b)
{
    struct library *ia = (struct  library  *)a;
    struct  library  *ib = (struct  library  *)b;
    return (int)(100.f*ia-> acession_number- 100.f*ib->acession_number);

}

void order_of_accession_number()
{
    int j;

qsort((struct library*)details, is_any_book_there, sizeof(details[0]), struct_cmp_by_acession_number);
        printf("the books in the order of accession number in this library are\n");
        for(j=1;j<is_any_book_there;j++)
        {
            printf("Acesssion number:%d\nTitle:%s\nAuthor Name:%s\nPrice:%d\nAvailability:%d\n",details[j].acession_number,details[j].tittle_of_the_book,details[j].author_name,details[j].price,details[j].availability);
        }
}









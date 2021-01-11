#include <stdio.h>
#include <stdlib.h>

int main()
{
    int date,month,yr,monthcode,centurycode,last_two_digit,remainder;
   printf("enter       the  date");
   scanf("%d",&date);
   printf("enter    the month");
   scanf("%d",&month);
   printf("enter    the year");
   scanf("%d",&yr);
    if(yr%400==0)
    {
        if(yr%4==0)
        {
            if(month==1)
                monthcode=6;
                 if(month==2)
                monthcode=2;
                 if(month==3)
                monthcode=3;
                 if(month==4)
                monthcode=6;
                 if(month==5)
                monthcode=1;
                 if(month==6)
                monthcode=4;
                 if(month==7)
                monthcode=6;
                 if(month==8)
                monthcode=2;
                 if(month==9)
                monthcode=5;
                 if(month==10)
                monthcode=0;
                 if(month==11)
                monthcode=3;
                 if(month==12)
                monthcode=5;

        }

    }
    else
    {
        if(month==1)
            monthcode=0;
        if(month==2)
            monthcode=3;
            if(month==3)
            monthcode=3;
            if(month==4)
            monthcode=6;
            if(month==5)
            monthcode=1;
            if(month==6)
            monthcode=4;
            if(month==7)
            monthcode=6;
            if(month==8)
            monthcode=2;
            if(month==9)
            monthcode=5;
            if(month==10)
            monthcode=0;
            if(month==11)
            monthcode=3;
            if(month==12)
            monthcode=5;
    }
    if(yr>=1&&yr<=99)
        centurycode=6;
       else  if(yr>=100&&yr<=199)
        centurycode=4;
         if(yr>=200&&yr<=299)
            centurycode=2;
   else  if(yr>=300&&yr<=399)
        centurycode=0;
    else    if(yr>=400&&yr<=499)
        centurycode=6;
       else      if(yr>=500&&yr<=599)
        centurycode=4;
        else     if(yr>=600&&yr<=699)
        centurycode=2;
     else   if(yr>=700&&yr<=799)
        centurycode=0;
       else     if(yr>=800&&yr<=899)
        centurycode=6;
       else      if(yr>=900&&yr<=999)
        centurycode=4;
       else      if(yr>=1000&&yr<=1099)
        centurycode=2;
        else    if(yr>=1100&&yr<=1199)
        centurycode=0;
       else     if(yr>=1200&&yr<=1299)
        centurycode=6;
        else     if(yr>=1300&&yr<=1399)
        centurycode=4;
       else      if(yr>=1400&&yr<=1499)
        centurycode=2;
      else  if(yr>=15000&&yr<=1599)
        centurycode=0;
      else      if(yr>=1600&&yr<=1699)
        centurycode=6;
      else       if(yr>=1700&&yr<=1799)
        centurycode=4;
       else      if(yr>=1800&&yr<=1899)
        centurycode=2;
       else if(yr>=1900&&yr<=1999)
        centurycode=0;
       else     if(yr>=2000&&yr<=2099)
        centurycode=6;
            else if(yr>=2100&&yr<=2199)
        centurycode=4;
         else    if(yr>=2200&&yr<=2299)
        centurycode=2;
      else  if(yr>=2300&&yr<=2399)
        centurycode=0;

if(yr>=1&&yr<=99)
        last_two_digit=yr;
       else  if(yr>=100&&yr<=199)
last_two_digit=yr%100;
      else   if(yr>=200&&yr<=299)
       last_two_digit=yr%100;
   else  if(yr>=300&&yr<=399)
    last_two_digit=yr%100;
    else    if(yr>=400&&yr<=499)
       last_two_digit=yr%100;
       else      if(yr>=500&&yr<=599)
     last_two_digit=yr%100;
        else     if(yr>=600&&yr<=699)
      last_two_digit=yr%100;
     else   if(yr>=700&&yr<=799)
       last_two_digit=yr%100;
       else     if(yr>=800&&yr<=899)
     last_two_digit=yr%100;
       else      if(yr>=900&&yr<=999)
     last_two_digit=yr%100;
       else      if(yr>=1000&&yr<=1099)
       last_two_digit=yr%100;
        else    if(yr>=1100&&yr<=1199)
   last_two_digit=yr%100;
       else     if(yr>=1200&&yr<=1299)
last_two_digit=yr%100;
        else     if(yr>=1300&&yr<=1399)
     last_two_digit=yr%100;
       else      if(yr>=1400&&yr<=1499)
   last_two_digit=yr%100;
      else  if(yr>=15000&&yr<=1599)
    last_two_digit=yr%100;
      else      if(yr>=1600&&yr<=1699)
    last_two_digit=yr%100;
      else       if(yr>=1700&&yr<=1799)
    last_two_digit=yr%100;
       else      if(yr>=1800&&yr<=1899)
     last_two_digit=yr%100;
       else if(yr>=1900&&yr<=1999)
      last_two_digit=yr%100;
       else     if(yr>=2000&&yr<=2099)
        last_two_digit=yr%100;
            else if(yr>=2100&&yr<=2199)
      last_two_digit=yr%100;
         else    if(yr>=2200&&yr<=2299)
      last_two_digit=yr%100;
      else  if(yr>=2300&&yr<=2399)
     last_two_digit=yr%100;
remainder=(date+monthcode+centurycode+last_two_digit+(last_two_digit/4))%7;
if(remainder==0)
    printf("subnday");
if(remainder==1)
    printf("monday");
    if(remainder==2)
    printf("tuesday");
    if(remainder==3)
    printf("wednesday");
    if(remainder==4)
    printf("thrusnday");
    if(remainder==5)
    printf("friday");
    if(remainder==6)
    printf("satday");
}

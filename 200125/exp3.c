#include <stdio.h>
int main()
{   
     int a=1904;
      
     if(a%400==0)
     { printf("year is leap");}
        else if(a%4==0 && a%100!=0)
       { printf("year is leap");}
       else
       { printf("year is NOT LEAP");
        }
    return 0;
     }

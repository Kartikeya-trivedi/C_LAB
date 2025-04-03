//WAP to convert given second into its equivalent hour, minute and second as per the following
#include <stdio.h>
int main()
{
  int s = 7560;
  int m = 7560/60;
  int h = m/60;
  int sec = s%60;
  int min = m%60;
  printf("HOUR= %d,MINUTE = %d,SECONDS = %d",h,min,sec);
  return 0;
}
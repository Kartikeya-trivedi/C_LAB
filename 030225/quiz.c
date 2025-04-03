 #include <stdio.h>
 int main()
 { int n;
 int sum =0;
 int sum1;
  printf("enter a number \n");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    if(n%i==0)
    {
        sum = sum +i;
    }
  }
  sum1 = sum - n;
  if(n==sum1)
  {
    printf("%d is perfect",n);

  }
  else
  {
    printf("%d is not perfect",n);
  }
    return 0;
 }

 
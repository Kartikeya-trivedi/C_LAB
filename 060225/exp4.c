//   *
//  *  *
// *  *  * 
#include <stdio.h>
int main()
{   int rows;
    printf("enter number of rows");
    scanf("%d",&rows);
  for(int i=0;i<rows;i++)
  {
    for(int j =1;j<=rows;j++)
    {if(j>= rows-i)
    {
        printf("* ");
    }
    else 
    {
        printf(" ");
    }
    }
    printf("\n");
  }
    return 0;
}
     
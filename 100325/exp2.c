//wap to check if the given matrix is identity or not
#include <stdio.h>
int main()
{
 int a1[3][3];
 int c = 0;
 for(int i =0;i<3;i++)
 {
    for(int j=0;j<3;j++)
    {   printf("enter a number for first array \n");
        scanf("%d",&a1[i][j]);
    }
 }
  // printing those array before swapping
  printf("array 1 is \n");
  for(int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
          printf("%d ", a1[i][j]);
      }
      printf("\n");
  }
  for(int i =0;i<3;i++)
  {
     for(int j=0;j<3;j++)
     {  if(i==j)
         {
             if(a1[i][j]==1)
          c++;
         }
     }
  }
  for(int i =0;i<3;i++)
  {
     for(int j=0;j<3;j++)
     {  
        if(i!=j)
        {
            if(a1[i][j]==0)
            {
            c++;
            }
        }
     }
  }

 if(c==9)
 printf("identiy matrix ");
 else
 printf("not identity matrix");

 return 0;
}
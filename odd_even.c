#include <stdio.h>

int main()
{ 
  int N,a;
  scanf("%d",&N);
  a= N%2;
  if (a==0)
     {
       if (N>=0 && N<=5)
          {
            printf ("very small even");
          }
       else if (N>=6 && N<=20)
          {
            printf ("small even");
          }
       else 
          {
            printf ("even");
          }
      }
  else
      {
        printf("odd");
      }
  return 0;
}
#include<stdio.h>
#include<conio.h>
int main()
{
  int N,M;
  int sum;
  scanf("%d%d",&N,&M);
  sum = N+M;  
  printf("%d %d %d %d", sum/86400,sum/3600,(sum%3600)/60,sum%60);
  getch();
  return 0;
}
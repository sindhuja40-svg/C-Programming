#include<stdio.h>
#include<conio.h>
void main()
{
  int i=2,n,sum=0;
  printf("Enter number:");
  scanf("%d",&n);
sumeven:
  sum=sum+i;
  i=i+2;
  if(i<=n)
  goto sumeven;
  printf("Sum=%d",sum);
getch();
}

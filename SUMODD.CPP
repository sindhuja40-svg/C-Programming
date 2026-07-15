#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i=1,sum=0;
  clrscr();
  printf("Enter the number:");
  scanf("%d",&n);
  calculate:
    sum=sum+i;
    i=i+2;
    if(i<=n)
    goto calculate;
      printf("Sum of odd numbers:%d",sum);
      getch();
  }
#include<stdio.h>
#include<conio.h>
void main()
{
  int i=1,n,fact=1;
  printf("Enter number:");
  scanf("%d",&n);
factorial:
  fact=fact*i;
  i++;
  if(i<=n)
  goto factorial;
  printf("Factorial number:%d",fact);
getch();
}

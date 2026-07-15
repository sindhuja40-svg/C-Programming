#include<stdio.h>
#include<conio.h>
void main(){
  int n,i=1,mul;
  printf("Enter number:");
  scanf("%d",&n);
multiple:
  mul=i*n;
  printf("%d * %d :%d\n",i,n,mul);
  i++;
  if(i<=10)
  goto multiple;
getch();
}
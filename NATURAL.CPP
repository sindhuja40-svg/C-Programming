#include<stdio.h>
#include<conio.h>
void main(){
  int i=1,sum=0,n;
  printf("Enter n:");
  scanf("%d",&n);
print:
  sum=sum+i;
  i++;
  if(i<=n)
   goto print;
  printf("Sum=%d",sum);
  getch();
}
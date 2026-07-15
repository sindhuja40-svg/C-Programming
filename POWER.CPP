#include<stdio.h>
#include<conio.h>
void main(){
   int i=1,pow=1,n,x;
   printf("Enter number:");
   scanf("%d",&x);
   printf("Emter expo:");
   scanf("%d",&n);
power:
  pow=pow*x;
  i++;
  printf("%d\n",pow);
  if(i<=n)
   goto power;
   getch();
}

#include<stdio.h>
#include<conio.h>
void main(){
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  switch(a>b && a>c){
   case 1:
   printf("%d is greater",a);
   break;
   default:
   printf(" %d is greater",b>c ? b:c);
   }
   getch();
  }

#include<stdio.h>
#include<conio.h>
void main(){
  int n;
  clrscr();
  scanf("%d",&n);
  switch(n%7){
  case 0:
  printf("Multiple");
  break;
  default:
  printf("Not a multiple");
  }
  getch();
}
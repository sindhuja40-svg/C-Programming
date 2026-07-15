#include<stdio.h>
#include<conio.h>
void main(){
 char c;
 clrscr();
 scanf("%c",&c);
 if(c>=48 && c<=57){
 printf("digit");
 }
 else if((c>=65 && c<=90) || (c>=97 && c<=122)){
 printf("Alphabet");
 }
 else {
  printf("Special character");
  }
  getch();
}


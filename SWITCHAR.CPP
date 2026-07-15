#include<stdio.h>
#include<conio.h>
void main(){
  char c;
  scanf("%c"",&c);
  switch(c){
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
   printf("Vowels");
   break;
   default:
   printf("Consonants");
  }
  getch();
}
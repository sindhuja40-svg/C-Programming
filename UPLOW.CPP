#include<stdio.h>
#include<conio.h>
void main(){
 char c;
 scanf("%c",&c);
 if(c>=65 && c<=90){
  printf("Uppercase");
  }
 else if(c>=97 && c<=122){
  printf("Lowercase");
  }
 else{
 printf("Invalid character");
 }
  getch();
  }
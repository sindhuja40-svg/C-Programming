#include<stdio.h>
#include<conio.h>
void main(){
 char c;
 scanf("%c",&c);
 if((c>=65 && c<=90)||(c>=97 && c<=122)){
    printf("ALPHABET");
    }
    else{
    printf("Not a Alphabet");
    }
    getch();
 }
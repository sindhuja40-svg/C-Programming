#include<stdio.h>
#include<conio.h>
void main(){
 int i=1,n,x;
 double pow=1;
 printf("Enter number:");
 scanf("%d",&x);
 printf("Enter expo:");
 scanf("%d",&n);
powerby:
 pow=1/(pow*x);
 i++;
 printf("%lf\n",pow);
 if(i<=n)
   goto powerby;
 getch();
}
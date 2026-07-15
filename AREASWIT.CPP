#include<stdio.h>
#include<conio.h>
void main(){
int n,s,a,re,l,w,t,b,h,c,r;
printf("0 - Area of Square\n");
printf("1 - Area of Rectangle\n");
printf("2 - Area of Triangle\n");
printf("3 - Area of Circle\n");
printf("Enter your Choice\n");
scanf("%d",&n);
switch(n){
 case 0:
   printf("Enter a value:");
   scanf("%d",&a);
   s=a*a;
   printf("Area of Square%d",s);
   break;
 case 1:
   printf("Enter l and w value:");
   scanf("%d%d",&l,&w);
   re=l*w;
   printf("Area of Rectangle%d",re);
   break;
 case 2:
   printf("Enter b and h value:");
   scanf("%d%d",&b,&h);
   t=0.5*b*h;
   printf("Area of Triangle%d",t);
   break;
 case 3:
   printf("Enter r value:");
   scanf("%d",&r);
   c=3.14f*r*r;
   printf("Area of Circle%d",c);
   break;
 default:
   printf("Invalid");
   }
 getch();
}

#include<stdio.h>
#include<conio.h>
enum day
{
 MON,
 TUE,
 WED,
 THU,
 FRI,
 SAT,
 SUN,
};
void main(){
 enum day today=WED;
 switch(today)
 {
 case 1:
   printf("Today id Monday");
   break;
 case 2:
   printf("Today is Tuesday");
   break;
 case 3:
   printf("Today is Wednesday");
   break;
 case 4:
   printf("Today is Thurday");
   break;
 case 5:
   printf("Today is Friday");
   break;
 case 6:
   printf("Today is Saturday");
   break;
 case 7:
   printf("Today is Sunday");
   break;
 default:
   printf("Invalid");
   }
getch();
}
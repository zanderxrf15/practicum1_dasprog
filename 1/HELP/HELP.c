#include <stdio.h>

int main(){
int date,month,year;
scanf("%d %d %d", &date,&month,&year);

if (year%4 == 0){
    printf("it is a leap year.");
    }
else if (date>31 || month>12 || year>2080 || date<1 || month<1 || year<1){
    printf("invalid date or month!!!");
}
else if (date>28 && month == 2){ //February
    printf("invalid date or month!!!");
}
else if (date>30 && month == 4){ //April
    printf("invalid date or month!!!");
}
else if (date>30 && month == 6){ //June
    printf("invalid date or month!!!");
}
else if (date>30 && month == 9){ //September
    printf("invalid date or month!!!");
}
else if (date>30 && month == 11){ // November
    printf("invalid date or month!!!");
}
else {
   switch (month){
   case 1: //January
       printf("Day Number: %d", date+0);
       break;
   case 2: //February
       printf("Day Number: %d", date+31);
       break;
   case 3: //March
       printf("Day Number: %d", date+59);
       break;
   case 4: //April
       printf("Day Number: %d", date+90);
       break;
   case 5: //May
       printf("Day Number: %d", date+120);
       break;
   case 6: //June
       printf("Day Number: %d", date+151);
       break;
   case 7: //July
       printf("Day Number: %d", date+181);
       break;
   case 8: //August
       printf("Day Number: %d", date+212);
       break;
   case 9: //September
       printf("Day Number: %d", date+243);
       break;
   case 10: //October
       printf("Day Number: %d", date+273);
       break;
   case 11: //November
       printf("Day Number: %d", date+304);
       break;
   case 12: //December
       printf("Day Number: %d", date+334);
       break;
   }
}
return 0;
}


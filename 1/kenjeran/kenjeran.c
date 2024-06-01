#include <stdio.h>

int main(){

int M, N, T , cycle, remaining_time;
int car_pass, extra_cars, total_cars_pass, remaining_cars;
int total_cars_queueing;
scanf("%d %d %d", &M, &N, &T);

if (M>=1 || M<=100 || N>=1 || N<=100 || T>=1 || T<=1000)
{
car_pass = M+1;
total_cars_queueing = car_pass +N;
cycle = T /85;
remaining_time = T - (cycle *85);
extra_cars = (remaining_time - 25) / 5;
total_cars_pass = (cycle * 12) + extra_cars;
if (total_cars_queueing > total_cars_pass)
{
    remaining_cars = total_cars_queueing - total_cars_pass;
}
else
{
    remaining_cars = 0;
}
if(car_pass <= total_cars_pass)
{
    printf("YES! %d\n", remaining_cars);
}
else
{
 printf("NO! %d\n", remaining_cars);
}
}
return 0;
}

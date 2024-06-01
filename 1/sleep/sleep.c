#include <stdio.h>

int main(){
int wakeHH, wakeMM, classHH, classMM, tripTime, minSleepTime;
scanf("%d %d %d %d %d %d", &wakeHH, &wakeMM, &classHH, &classMM, &tripTime, &minSleepTime);

int gap = ((classHH*60)+classMM)-((wakeHH*60)+wakeMM);
int SleepTime = gap-tripTime;

if (SleepTime>=minSleepTime)
{
printf("Zoro can sleep for another %d minutes :D", SleepTime);
}

else if(gap<=0)
{
printf("Don't sleep again or you'll be late, Zoro");
}

else
{
printf("Sleepyhead you already late smh");
}

return 0;
}

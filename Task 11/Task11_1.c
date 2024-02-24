#include <stdio.h>
#include <stdlib.h>

typedef struct{
    signed int hours_1;
    signed int minutes_1;
    signed int seconds_1;
}Start_time;

typedef struct{
    signed int hours_2;
    signed int minutes_2;
    signed int seconds_2;
}Stop_time;

typedef struct{
    signed int time_h;
    signed int time_m;
    signed int time_s;
}time_difference;



Start_time start;
Stop_time  stop;
time_difference dif;


int main()
{
    printf("Enter start time :\n");
    printf("Enter hours, minutes, seconds respectively: ");
    scanf("%i %i %i",&start.hours_1, &start.minutes_1, &start.seconds_1);


    printf("Enter stop time :\n");
    printf("Enter hours, minutes, seconds respectively: ");
    scanf("%i %i %i",&stop.hours_2, &stop.minutes_2, &stop.seconds_2);


    dif.time_h = start.hours_1 - stop.hours_2;
    dif.time_m = start.minutes_1 - stop.minutes_2;
    dif.time_s = start.seconds_1 - stop.seconds_2;

    printf("\nTIME DIFFERENCE: %i:%i:%i - %i:%i:%i = %i:%i:%i\n", start.hours_1, start.minutes_1, start.seconds_1,
                                                                  stop.hours_2, stop.minutes_2, stop.seconds_2,
                                                                  dif.time_h, dif.time_m, dif.time_s );

    return 0;
}

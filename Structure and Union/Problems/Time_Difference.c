#include <stdio.h>

typedef struct Time
{
    int seconds;
    int minutes;
    int hours;
}   time;

void TimeDifference(time start, time stop, time *diff);

int main()
{
    time start, stop, diff;

    printf("Enter the Start Time.\n");
    printf("Enter Hours, Minutes and Seconds: ");
    scanf("%d%d%d", &start.hours, &start.minutes, &start.seconds);

    printf("Enter the Stop Time.\n");
    printf("Enter Hours, Minutes and Seconds: ");
    scanf("%d%d%d", &stop.hours, &stop.minutes, &stop.seconds);

    TimeDifference(start, stop, &diff);

    printf("\nTime Difference: %d:%d:%d - ", start.hours, start.minutes, start.seconds); // Start Time
    printf("%d:%d:%d ", stop.hours, stop.minutes, stop.seconds); // Stop Time
    printf("= %d:%d:%d\n", diff.hours, diff.minutes, diff.seconds); // Difference

    return 0;
}

void TimeDifference(time start, time stop, time *diff)
{
    while(start.seconds > stop.seconds)
    {
        --stop.minutes;
        stop.seconds += 60; // Converting 1m to 60s
    }
    diff->seconds = stop.seconds - start.seconds;

    while(start.minutes > stop.minutes)
    {
        --stop.hours;
        stop.minutes += 60; // Converting 1h to 60m
    }
    diff->minutes = stop.minutes - start.minutes;

    diff->hours = stop.hours - start.hours;
}
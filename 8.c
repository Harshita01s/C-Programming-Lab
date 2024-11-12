#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    int hours;
    int minutes;
    int seconds;
} Time; // In 24hr format

typedef struct {
    Date date;
    Time time;
} DateTime;

void print_Roll_Name() {
    printf("\t\tHarshita Sharma\n\t\tRoll:23BCS081\n\n");
}

int calculateDifferenceInSeconds(DateTime dt1, DateTime dt2);

int main() {
    print_Roll_Name();
    printf("8. Use structures to represent a Date and Time, and calculate the difference in time between two Date-Time instances.\n");

    DateTime dt1 = {{11, 11, 2024}, {14, 30, 0}};
    DateTime dt2 = {{30, 11, 2024}, {16, 45, 30}};

    int difference = calculateDifferenceInSeconds(dt1, dt2);

    printf("Difference between the two Date-Time instances: %d seconds\n", difference);

    return 0;
}

int calculateDifferenceInSeconds(DateTime dt1, DateTime dt2) {
    int days1 = dt1.date.year * 365 + dt1.date.month * 30 + dt1.date.day;
    int days2 = dt2.date.year * 365 + dt2.date.month * 30 + dt2.date.day;

    int seconds1 = days1 * 24 * 3600 + dt1.time.hours * 3600 + dt1.time.minutes * 60 + dt1.time.seconds;
    int seconds2 = days2 * 24 * 3600 + dt2.time.hours * 3600 + dt2.time.minutes * 60 + dt2.time.seconds;

    return seconds2 - seconds1;
}

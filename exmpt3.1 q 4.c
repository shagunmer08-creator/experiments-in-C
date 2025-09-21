#include <stdio.h>

int isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int main() {
    int year, totalDays = 0;
    int dayOfWeek;

    printf("shagun mer\n");
    printf("Enter the year: ");
    scanf("%d", &year);

    if (year < 1) {
        printf("Invalid year. Please enter year >= 1\n");
        return 1;
    }

    for (int i = 1; i < year; i++) {
        if (isLeapYear(i))
            totalDays += 366;
        else
            totalDays += 365;
    }

    dayOfWeek = totalDays % 7;

    const char* days[] = {
        "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"
    };

    printf("The day on 1st January of year %d is: %s\n", year, days[dayOfWeek]);

    return 0;
}
#include <stdio.h>
#include <stdbool.h>

bool is_leap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int days_in_month(int year, int month) {
    int days;
    switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        days = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    case 2:
        days = is_leap(year) ? 29 : 28;
        break;
    default:
        days = 0;
        break;
    }
    return days;
}

int day_of_year(int year, int month, int day) {
    int days = 0;
    for (int i = 1; i < month; i++) {
        days += days_in_month(year, i);
    }
    days += day;
    return days;
}

int main() {
    int year, month, day;
    printf("Enter year, month, day: ");
    scanf("%d%d%d", &year, &month, &day);

    printf("%d\n", day_of_year(year, month, day));

    return 0;
}
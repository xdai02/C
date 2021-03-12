#include <stdio.h>

struct Date {
    int year;
    int month;
    int day;
};

int main() {
    struct Date date;
    date.year = 2021;
    date.month = 3;
    date.day = 12;

    printf("%d年%d月%d日\n", date.year, date.month, date.day);
    return 0;
}
#include <stdio.h>
#include <stdbool.h>

bool lemonade_change(int *bills, int bills_size) {
    int fives = 0;
    int tens = 0;

    for (int i = 0; i < bills_size; i++) {
        int bill = bills[i];
        if (bill == 5) {
            fives++;
        } else if (bill == 10) {
            if (fives > 0) {
                fives--;
                tens++;
            } else {
                return false;
            }
        } else {
            if (tens > 0 && fives > 0) {
                tens--;
                fives--;
            } else if (fives >= 3) {
                fives -= 3;
            } else {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int bills[] = {5, 5, 5, 10, 20};
    int bills_size = sizeof(bills) / sizeof(int);

    if (lemonade_change(bills, bills_size)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
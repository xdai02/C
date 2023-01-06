#include <stdio.h>

union Value {
    int int_data;
    char char_data;
};

int main() {
    union Value val;

    val.char_data = 'A';
    printf("val.int_data = %d\n", val.int_data);

    val.int_data = 97;
    printf("val.char_data = %c\n", val.char_data);

    return 0;
}
#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter the key: ");
    scanf("%d", &key);

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = true;
            break;
        }
    }

    if (found) {
        printf("%d exists.\n", key);
    } else {
        printf("%d not found!\n", key);
    }

    return 0;
}
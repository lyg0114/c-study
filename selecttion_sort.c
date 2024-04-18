#include <stdio.h>

void foo(const int *num, int size);

int main(void) {
    int num[5] = {3, 5, 1, 4, 2};
    int size = sizeof(num) / sizeof(num[0]);
    int tmp = 0;
    int min = 0;
    for (int i = 0; i < size; ++i) {
        min = i;
        for (int j = i; j < size; ++j) {
            if (num[j] < num[min]) {
                min = j;
            }
        }
        if (min != i) {
            tmp = num[i];
            num[i] = num[min];
            num[min] = tmp;
            foo(num, size);
        }
    }
    return 0;
}

void foo(const int *num, int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d\t", num[i]);
    }
    putchar('\n');
}


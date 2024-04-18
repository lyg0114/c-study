#include <stdio.h>

void printArray(int arr[][5], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int nums[5][5] = {};
    int cnt = 1;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (i % 2 == 0) {
                nums[i][j] = cnt++;
            } else {
                nums[i][4 - j] = cnt++;
            }
        }
    }

    printArray(nums, 5, 5);
    return 0;
}


#include <stdio.h>

int has_two_sum(int *arr, int n, int value);

int main(void) {

    return 0;
}
// n - 1 + n - 2 + n - 3  ... + n
//
// 5 + 4 + 3 + 2 + 1 = 15
// int current = 1;
// [1][5][2][14][9][11].......
//  ^
// 

// O(n^2) CAUSE NESTED FOR LOOPS
int has_two_sum(int *arr, int n, int value) {
    // TODO
    int current;
    for (int i = 0; i < n; i++) {
        current = arr[i];
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == value) {
                return 1;
            }
        }
    }

    return 0;
}


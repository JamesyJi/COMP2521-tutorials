#include <stdio.h>

int eval_polynomial(int *arr, int n, int x);

int main(void) {
    return 0;
}
// x^10 = x * x * x * x * x
// x^5 + 3x^4 + 2x^3 + 8x^2 + 9x + 2
// [1, 3, 2, 8, 9, 2]
//        ^

// O(N^2) SOLUTION
// Loop through the numbers.
// Compute power for each number (which is O(N) operation since x*x*x*x...*x)

// O(N) SOLUTION
// SAVE THE PREVIOUS POWER WE CALCULATED so we don't recompute it
// x^0 = ?
// x^1 = x
// x^2 = x^1 * x
// x^3 = x^2 * x
// x^4 = x^3 * x
// x^5 = x^4 * x
// Now computing the power is an O(1) operation!
int eval_polynomial(int *arr, int n, int x) {
    int res = 0;
    int power_x = 0;
    for (int i = n - 1; i >= 0; --i) {
        res += arr[i] * pow(x, power_x);
        power_x++;
    }
    return res;
}

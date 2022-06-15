#include <stdio.h>

int eval_polynomial(int *arr, int n, int x);

int main(void) {
    return 0;
}
// x^10 = x * x * x * x * x

// x^5 + 3x^4 + 2x^3 + 8x^2 + 9x + 2
// [1, 3, 2, 8, 9, 2]
//        ^

// O(N) SOLUTION
// SAVE THE PREVIOUS POWER WE CALCULATED so we don't recompute it
// x^0 = ?
// x^1 = x
// x^2 = x * x
// x^3 = x^2 * x
// x^4 = x^3 * x
// x^5 = x^4 * x

// N loops
// within each loop, O(1) operation
int eval_polynomial(int *arr, int n, int x) {
    int res = 0;
    int power_x = 0;
    for (int i = n - 1; i >= 0; --i) {
        res += arr[i] * pow_in_log_n_time(x, power_x);
        power_x++;
    }
    return res;
}


// 2^100 = 2^50 *2^50 
// N loops
// within each loop, power_x can take up to N operations
// O(N^2)

// // 10000000000000000000 
// // O(N + logN)
// // O(N * logN)
// BinaryConversion:
// 	Input:  positive integer n
// 	Output: binary representation of n on a stack
	
//     original_n = n;
// 	create empty stack S
// 	while n > 0 do
//         push (n mod 2) onto S
// 		n = floor(n / 2)
// 	end while

//     for (int i = 0; i < original_n; ++i);

// 	return S


// // n = 237
// // O(logN)

// // O(N/2) == O(N)


// // 2^N = 237












// S: 11101101
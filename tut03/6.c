#include <stdio.h>


int main(void) {

    return 0;
}

// SLOWER ORIGINAL SOLUTION
// Loop through P array to find 1. Print the corresponding animal.
// Then loop through to find 2. Print the corresponding animal.
// Then loop through to find 3. Print the corresponding animal.
// =====TIME COMPLEXITY=====
// O(N^2)
// We have to loop through the P array for all positions 1...N
// =====SPACE COMPLEXITY=====
// O(1)
// We don't use any extra space

// [cat, dog, snake, bird, eagle, koala, fish, mouse]
// P: [2, 6, 7, 1, 4, 8, 5, 3]
//     ^

// THE FASTER SOLUTION
// Loop through P array and place the corresponding animal in the A array in the right 
// slot in the answer array.
// Then loop through answer array and print.
// =====TIME COMPLEXITY=====
// O(N) to place animals in the answer array
// O(N) to print the answer array
// = O(2N)
// =====SPACE COMPLEXITY=====
// O(N) cause we create a new array
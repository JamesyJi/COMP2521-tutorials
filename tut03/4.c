// BinaryConversion:
	// Input:  positive integer n
	// Output: binary representation of n on a stack
	
	// create empty stack S
	// while n > 0 do
	// 	push (n mod 2) onto S
	// 	n = floor(n / 2)
	// end while
	// return S


// Time complexity is O(logN) BASE 2
// Each iteration we are halving n
// Let i be the number of iterations
// 2^i = N
// Rearrange and you get time complexity of O(logN)


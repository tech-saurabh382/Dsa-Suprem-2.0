
// ***** Euclid's Algorithm to find GCD *****

// These 2 are important!!! and take minimum time of compilar these are not so,
//  heavy operator generally these 2 are use to find gcd ->

//  gcd(a,b) = gcd(a-b,b) a > b
//  gcd(a,b) = gcd(b-a,a) a < b

// gcd(a,b) = gcd(a%b,b) a > b -> % opreation is heavy to perform



// GFG Problem no.
// GCD of two numbers -> https://practice.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1

// Question Description

// Given two positive integers A and B, find GCD of A and B.

// Example 1:

// Input: A = 3, B = 6
// Output: 3
// Explanation: GCD of 3 and 6 is 3

// Example 2:

// Input: A = 1, B = 1
// Output: 1
// Explanation: GCD of 1 and 1 is 1

// Your Task:  
// You don't need to read input or print anything. Complete the function gcd() which takes two positive integers as input parameters and returns an integer.


// Expected Time Complexity: O(log(min(A, B)))
// Expected Auxiliary Space: O(1)


// Constraints:
// 1 ≤ A, B ≤ 109

// ******** Solution ********

class Solution
{
	public:
    int gcd(int A, int B) 
	{ 
	    // code here
	    if(A == 0) return B;
	    
	    if(B == 0) return A;
	    
	    while(A > 0 && B > 0){
	        if(A>B){
	            A = A - B; 
	        }
	        else{
	            B = B - A;
	        }
	    }
	    
	    return A == 0 ? B : A;
	      
	} 
};
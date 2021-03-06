#include <iostream>
//  Factorial Recursive Algorithm C++ Implementation
int n{ 0 }; // Initialize
int answer{ 0 };
int recursiveFactorial(int n) { // takes int n, to calculate n!
	if (n > 1) { // Since 1! = 1 and 0! = 1, and n must be positive;
		answer = (n-1) * answer; // n! = (n * n-1) repeating until n < 1
		n -= 1; 
		recursiveFactorial(n); // We keep calling back until
	}
	else if (n == 0) { // Special case if n = 0; 0! = 1;
		answer = 1;
		return answer;
	}
	else { // We finished our recursive calculation now we return our result.
		return answer; // Side note: we don't need a special if-case for n = 1 since the returned answer already equals 1.
	}
}

int main() {
	
	std::cout << "Enter n for n!" << "\n" << "n = "; // Prompt user for n
	std::cin >> n; // Get User Response
	answer = n; 
	std::cout << "n! = " << recursiveFactorial(n); // print result of our calculation;
}

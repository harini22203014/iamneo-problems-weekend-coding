// C++ program to find 
// factorial of given number 
#include <iostream> 
using namespace std; 

// Function to find factorial 
// of given number 
unsigned int factorial(unsigned int n) 
{ 
	if (n == 0 || n == 1) 
		return 1; 
	return n * factorial(n - 1); 
} 

// Driver code 
int main() 
{ 
	int n; 
	cin>>n;
	int res=(factorial(n*2))/((factorial(n+1)*factorial(n)));
	cout<<res;
	return 0; 
} 



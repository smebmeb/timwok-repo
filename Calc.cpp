#include <iostream>
using namespace std;

int main ()
{
	int x,y;
	cout << "Running calculator...\n\n";
	
	cout << "Enter two numbers." << endl; // Make the user input two numbers
	cout << "First number: ";
	cin >> x; // First number input
	
	cout << "Second number: ";
	cin >> y; // Second number input
	
	cout << endl;
	
	cout << "What is " << x << "+" << y << "?" << endl; // Addition
	cout << "The sum is " << (x+y) << "\n\n";
	
	cout << "What is " << x << "-" << y << "?" << endl; // Subtraction
	cout << "The difference is " << (x-y) << "\n\n";
	
	cout << "What is " << x << "x" << y << "?" << endl; // Multiplication
	cout << "The product is " << (x*y) << "\n\n";
	
	cout << "What is " << x << "/" << y << "?" << endl; // Division
	cout << "The result is " << (x/y) << " remainder " << (x%y) << endl;
	
	return 0;
}

#include <iostream>

using namespace std;

int main()
{
	int a,b;
	char str[] = "Hello Programmers";
	
	/* Single insertion operator */
	cout << "Enter 2 numbers - ";
	cin >> a >> b;
	cout << str;
	cout << endl;
	
	/* Multiple insertion operator */
	cout << "Value of a is " << a << endl << "Value of b is " << b;
	
	return 0;
}

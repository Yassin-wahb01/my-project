#include <iostream>

using namespace std;

int fac(int n) {

	int fac = 1;
	for (int i = 0; i <= n; i++)
		fac *= i;

	return fac;
}

int main() {
	int n;
	cout << "Enter number : ";
	cin >> n;
	cout << "The factorial is : " << fac(n);



	return 0;
}
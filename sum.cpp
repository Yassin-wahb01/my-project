#include <iostream>

using namespace std;

int sum(int n1, int n2, int n3) {
	int total = n1 + n2 + n3;

	return total;
}

int main() {
	int x, y, z;
	cin >> x >> y >> z;
	cout << "Sum is : " << sum(x, y, z);



	return 0;
}
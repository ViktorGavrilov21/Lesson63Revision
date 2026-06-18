#include "logic.h"

int main() {
	int a, b, c;

	cout << "Input 3 numbers: ";
	cin >> a >> b >> c;

	get_in_order(&a, &b, &c);

	cout << "Result: " << a << ", " << b << ", " << c << endl;


	return 0;
}
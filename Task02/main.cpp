#include "logic.h"

int main() {
	int size;

	cout << "Input your size: ";
	cin >> size;

	int* array = new int[size];

	init(array, size, 0, 10);

	print(convert(array, size));
	print("\nAvg is: " + to_string(arithmetic_mean(array, size)) + "\n");


	return 0;
}
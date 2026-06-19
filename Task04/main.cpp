#include "logic.h"

int main() {
	int size;

	cout << "Input your size: ";
	cin >> size;

	int* array = new int[size];

	init(array, size, 0, 10);

	print("Array: " + convert(array, size));
	print("\nMin: " + to_string(find_min_num(array, size)));
	print("\nMax: " + to_string(find_max_num(array, size)));
	print("\nAvg is: " + to_string(arithmetic_mean(array, size)) + "\n");

	delete[] array;


	return 0;
}
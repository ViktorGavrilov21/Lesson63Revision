#include "logic.h"

int main() {
	int size;

	cout << "Input your size: ";
	cin >> size;

	int* array = new int[size];

	init(array, size, 0, 10);

	print("Array: " + convert(array, size));
	print("\nSum is: " + to_string(sum(array, size)) + "\n");

	delete[] array;


	return 0;
}
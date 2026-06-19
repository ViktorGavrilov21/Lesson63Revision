#include "logic.h"

int main() {
	int size;

	cout << "Input size: ";
	cin >> size;

	int* array = new int[size];

	init(array, size, 0, 10);

	print("Array: " + convert(array, size) + "\n");
	print(find_number_of_local_min_max(array, size));

	delete[] array;


	return 0;
}
#include "logic.h"

int main() {
	int a, b;
	int size;

	cout << "Input size: ";
	cin >> size;

	cout << "Input sort range (a, b): ";
	cin >> a >> b;

	int* array = new int[size];

	init(array, size, 0, 10);

	print("Array before: " + convert(array, size) + "\n");
	
	sort_from_range(array, size, a, b);

	print("Array after: " + convert(array, size) + "\n");

	delete[] array;


	return 0;
}
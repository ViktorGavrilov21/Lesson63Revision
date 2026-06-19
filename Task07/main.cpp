#include "logic.h"

int main() {
	int size;

	cout << "Input size: ";
	cin >> size;

	int* marks = new int[size];

	init(marks, size, 2, 5);

	print("Marks: " + convert(marks, size) + "\n");

	print(analize_exam_results(marks, size));

	delete[] marks;


	return 0;
}
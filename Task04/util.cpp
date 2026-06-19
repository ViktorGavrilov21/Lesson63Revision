#include "util.h"

void init(int* array, int size, int a, int b) {
	if (size <= 0) {
		return;
	}

	for (int i = 0; i < size; i++) {
		*(array + i) = rand() % (b - a + 1) + a;
	}
}

void print(string msg) {
	cout << msg;
}

string convert(int* array, int size) {
	if (size <= 0) {
		return "Error";
	}

	string s = "";

	for (int i = 0; i < size; i++) {
		s += to_string(*(array + i)) + " ";
	}


	return s;
}
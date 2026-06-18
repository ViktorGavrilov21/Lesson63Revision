#include "logic.h"

void get_in_order(int* a, int* b, int* c) {
	if (*b > *a) {
		int t = *a;
		*a = *b;
		*b = t;
	}
	if (*c > *b) {
		int t = *b;
		*b = *c;
		*c = t;
	}
	if (*b > *a) {
		int t = *a;
		*a = *b;
		*b = t;
	}
}
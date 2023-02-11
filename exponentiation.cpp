#include "exponentiation.h"

long long power(static long long a, int b) {
	int exp = a;

	for (b; b > 1; b--) {
		a = a * exp;
	}

	return a;
}
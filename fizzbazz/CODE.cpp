#include <iostream>

bool fizz_flag(int n);
bool buzz_flag(int n);
int modul(int n, int d);

int main() {
	for (int i = 1; i <= 100; i++) {
		if (buzz_flag(i) && fizz_flag(i)) {
			printf("fizzbuzz\n");
		}
		else if (fizz_flag(i)) {
			printf("fizz\n");
		}
		else if (buzz_flag(i)) {
			printf("buzz\n");
		}
		else {
			printf("%d\n", i);
		}
	}
	return 0;
}

bool fizz_flag(int n) {
	if (modul(n, 3) == 0) return true;
	else return false;
}

bool buzz_flag(int n) {
	if (modul(n, 5) == 0) return true;
	else return false;
}

int modul(int n, int d) {
	if (n < 0 || d < 0) {
		printf("error");
		return -1;
	}
	while (n >= d)
		n -= d;
	return n;
}
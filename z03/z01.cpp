#include <iostream>

using namespace std;

int gcdRec(int a, int b);
int sumDigits(int n);
int numDigits(int n);
void printOddEven(int n);
void hailstone(int n);

int gcdRec(int a, int b) {
	if (a == b) {
        return a;
    } else {
        return (a > b) 
            ? gcdRec(a - b, b) 
            : gcdRec(a, b - a);
    }
}

int sumDigits(int n) {
    return (n == 0)
        ? 0
        : n % 10 + sumDigits(n / 10);
}

int numDigits(int n) {
	return (n == 0) 
        ? 0
        : 1 + numDigits(n / 10);
}

void printOddEven(int n) {
	if (n <= 0) return;

	printOddEven(n - 2);

	if (n % 2 == 0) {
		cout << n << " ";
	}
	else {
		cout << n << " ";
	}
}

void hailstone(int n) {
	static int prev = 11;

	if (n == 1) {
        cout << 1 << " ";
    } else {
		cout << prev << " ";

		if (prev % 2 == 0) {
			prev = prev / 2;
		} else {
		    prev = 3 * prev + 1;
		}

		hailstone(n - 1);
	}
}

int main() {
	cout << "gcdRec(12, 42) = " << gcdRec(12, 42) << endl << "gcdRec(12, 25) = " << gcdRec(12, 25) << endl;
	cout << "sumDigits(123) = " << sumDigits(123) << endl << "sumDigits(971) = " << sumDigits(971) << endl;
	cout << "numDigits(12345) = " << numDigits(12345) << endl << "numDigits(971) = " << numDigits(971) << endl;
	cout << "printOddEven(15): ";
	printOddEven(15);
	cout << endl;
	cout << "printOddEven(14): ";
	printOddEven(14);
	cout << endl;
	cout << "hailstone(13): ";
	hailstone(13); cout << endl;
	cout << endl;
}
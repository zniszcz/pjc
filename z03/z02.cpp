#include <iostream>

using namespace std;

void ord3(double& a, double& b, double& c) {
	if (a > b) {
		double tmp = a;
		a = b;
		b = tmp;
	}
	if (b > c) {
		double tmp = b;
		b = c;
		c = tmp;
	}
	if (a > b) {
		double tmp = a;
		a = b;
		b = tmp;
	}
}
void ord3(double* a, double* b, double* c) {
	ord3(*a, *b, *c);
}

void getMinMax(double& a, double& b, double& c, double*& ptrMin, double*& ptrMax) {
	ptrMin = &a;
	ptrMax = &a;
	if (*ptrMin > b) {
		ptrMin = &b;
	}
	if (*ptrMin > c) {
		ptrMin = &c;
	}
	if (*ptrMax < b) {
		ptrMax = &b;
	}
	if (*ptrMax < c) {
		ptrMax = &c;
	}
}

void getMinMax(double *a, double* b, double* c, double** ptrMin, double** ptrMax) {
	getMinMax(*a, *b, *c, *ptrMin, *ptrMax);
}

int main() {
	using cout; using endl; double a, b, c, *ptrMin, *ptrMax;
	a = 2; b = 1; c = 3; ord3(a, b, c);
	cout << a << " " << b << " " << c << endl;
	a = 3; b = 2; c = 1; ord3(&a, &b, &c);
	cout << a << " " << b << " " << c << endl;
	a = 2; b = 3; c = 1;
	ptrMin = ptrMax = nullptr;
	getMinMax(a, b, c, ptrMin, ptrMax);
	cout << "Min = " << *ptrMin << "; " << "Max = " << *ptrMax << endl;
	a = 3; b = 1; c = 2; ptrMin = ptrMax = nullptr;
	getMinMax(&a, &b, &c, &ptrMin, &ptrMax);
	cout << "Min = " << *ptrMin << "; " << "Max = " << *ptrMax << endl;
}

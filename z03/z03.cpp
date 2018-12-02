#include <iostream>

using namespace std;

void merge(const int* a, size_t dima, const int* b, size_t dimb, int* c) {
	int counter_a = 0;
	int counter_b = 0;
	for(size_t i = 0; i <= (dima + dimb); i++) {
		if((counter_a < dima) && (a[counter_a] <= b[counter_b])) {
			c[i] = a[counter_a];
			counter_a++;
		} else if (counter_b < dimb){
			c[i] = b[counter_b];
			counter_b++;
		}
	}
}

void printArr(const int* a, size_t dima, const char* m) {
	cout << m << " [ ";
	for (size_t i = 0; i < dima; ++i) {
		cout << a[i] << " ";
    }
	cout << "]\n";
}

int main() {
	int a[] = {1,4,4,5,8};
	int b[] = {1,2,2,4,6,6,9};
	constexpr size_t dima = sizeof(a);
	constexpr size_t dimb = sizeof(b);
	constexpr size_t dimc = dima + dimb;
	int c[dimc];
	merge(a,dima,b,dimb,c);
	printArr(a,dima,"a");
	printArr(b,dimb,"b");
	printArr(c,dimc,"c");
}

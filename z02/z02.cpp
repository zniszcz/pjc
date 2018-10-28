#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n) {
    for (int i = 0; i < floor(sqrt(n)); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void printDivisors(int n) {

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
}

int numDivisors(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            sum++;
        }
    }

    return sum;
}

int gdc(int m, int n) {
    if (m != n) {
        bool mig = m > n; // mIsGreater
        return gdc((mig) ? n : m, (mig) ? m - n : n - m);
    }
    return m;
}

int phi(int n) {

    return 0;
}

int main() {

    cout << gdc(90, 25);

    return 0;
}
#include <iostream>
using namespace std;

void zadanie1() {
    double wzrost;
    double waga;
    double bmi;

    cout << "Podaj swoj wzrost (w metrach): ";
    cin >> wzrost;
    
    cout << "\nPodaj swoja wage (w kilogramach): ";
    cin >> waga;

    bmi = waga / (wzrost * wzrost);
    cout << "\nTwoje bmi to: " << bmi << "\n";
}

void zadanie2() {
    // Zakomentuj poniższą linijkę aby zobaczyć kompilację bez GETMIN
    #define GETMIN

    // Zakomentuj poniższą linijkę aby zobaczyć kompilację bez GETMAX
    #define GETMAX

    #if !defined(GETMAX) && !defined(GETMIN)
        #error
    #endif

        int l1, l2, l3;
        
        cout << "Prosze podac 3 liczby:";
        cin >> l1 >> l2 >> l3;

    #ifdef GETMAX
        int max = l1;

        if (max < l2) { 
            max = l2;
        }

        if (max < l3) {
            max = l3;
        }
        
        cout << "Najwieksza liczba to " << max << "\n";

    #endif

    #ifdef GETMIN
        int min = l1;
        
        if (min > l2) {
            max = l2;
        }

        if (min > l3) { 
            max = l3;
        }

        cout << "Najmniejsza liczba to " << min << "\n";
    #endif
}

void zadanie3() {
    int l1, l2, l3;
    int height;

    cout << "Enter three non-negative numbers: ";
    cin >> l1 >> l2 >> l3;
    
    height = (l1 > l2) ? l1 : l2;
    
    if (height < l3) {
        height = l3;
    }

    for (int i = height; i > 0; i--) {
        
        if (l1 >= i) { 
            cout << '*';
        } else {
            cout << ' ';
        }

        if (l2 >= i) {
            cout << '*';
        } else {
            cout << ' ';
        }

        if (l3 >= i) {
            cout << '*';
        } else {
            cout << ' ';
        }

        cout << endl;
    }
}

// Helper do zadania 4
int sumOfDigits(int n) {
    int sum = 0;

    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

void zadanie4() {
    // Odkomentuj poniższą linijkę aby zobaczyć kompilację po polsku
    #define POL

    // Odkomentuj poniższą linijkę aby zobaczyć kompilację po angielsku
    // #define ENG

    #if defined ENG && defined POL
        #error Możesz wybrać tylko jeden język
    #elif !defined(ENG) && !defined(POL)
        #error Musisz wybrać conajmniej jeden język
    #endif

    int max, maxSum, input;
    bool passedZero = false;

    max = 0;
    maxSum = 0;

    while (!passedZero) {
        #ifdef ENG
            cout << "Enter a natural number (0 if done):";
        #endif

        #ifdef POL
            cout << "Wpisz liczbe naturalną (0 by zakończyć):";
        #endif

        cin >> input;

        if (input == 0) {
            passedZero = true;
            break;
        }

        int currentSum = sumOfDigits(input);
        
        if (currentSum > maxSum) {
            max = input;
            maxSum = currentSum;
        }
    }

    #ifdef ENG
        cout << "Max sum of digits was " << maxSum << " for " << max << endl;
    #endif

    #ifdef POL
        cout << "Maksymalna suma cyfr wynosila " << maxSum << " dla liczby " << max << endl;
    #endif
}

int main() {

    zadanie1();
    zadanie2();
    zadanie3();
    zadanie4();

    return 0;
}
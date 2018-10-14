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
    // Usuń poniższą linijkę aby zobaczyć kompilację bez GETMIN
    #define GETMIN

    // Usuń poniższą linijkę aby zobaczyć kompilację bez GETMAX
    #define GETMAX

    #ifndef GETMAX && !defined(GETMIN)
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

int main() {

    // zadanie1();
    // zadanie2();
    // zadanie3();

    return 0;
}
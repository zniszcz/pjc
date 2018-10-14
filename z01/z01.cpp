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

int main() {

    zadanie1();
    
    return 0;
}
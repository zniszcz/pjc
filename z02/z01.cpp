#include <iostream>

int main() {

    using std::cout;
    using std::cin;
    
    int lastNumber = 0;
    int lastRepeated = 0;
    int maxRepeated = 0;

    while(true) {
        int i;

        cout << "Podaj liczbę całkowitą (zero aby zakończyć):";
        cin >> i;

        if (i == 0) {
            break;
        }

        if (i == lastNumber) {
            lastRepeated++;
        } else {
            lastRepeated = 1;
            lastNumber = i;
        }
        
        if (lastRepeated > maxRepeated) {
            maxRepeated = lastRepeated;
        }
    }

    cout << "Najdłuższa sekwencja: " << maxRepeated << " liczba " << lastNumber;
}
#include <iostream>

int main() {
    // Fail - sprawdzam sekwencję najmniejszych liczb a nie najczęstszych

    using std::cout;
    using std::cin;
    
    int wasZeroGiven = false;
    int min;
    int minCount = 0;

    while(!wasZeroGiven) {
        int i;
        cout << "Podaj liczbę całkowitą (zero aby zakończyć):";
        cin >> i;

        if (i == 0) {
            wasZeroGiven = true;
            break;
        }

        if (i < min) {
            min = i;
            minCount = 1;
        }

        if (i == min) {
            minCount++;
        }
    }

    cout << "Najdłuższa sekwencja: " << minCount << " liczba " << min;
}
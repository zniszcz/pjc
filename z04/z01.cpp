#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

template <typename T1>
T1 compareArrs(T1* arr1) {
    T1 max = arr1[0];
    for (int i = 0; i < (sizeof(arr1)/sizeof(*arr1)); i++) {
        max = (max > arr1[i]) ? arr1[i] : arr1[i];
    }

    return max;
}

int main() {

    int arr[] = { 0, 10, 20, 7, 5};
    double arr1[] = {1.0, 25.2, 3798923974923.2, 7.0};
    string arr2[] = {"d", "u", "n", "n", "o", "t", "e", "s", "t"};

    cout << "Największy element z arr to: " << compareArrs(arr) << endl;
    cout << "Największy element z arr1 to: " << compareArrs(arr1) << endl;
    cout << "Największy element z arr2 to: " << compareArrs(arr2) << endl;
    

    return 0;
}
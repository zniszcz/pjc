#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

template <typename T>
T getMaxRecur(const T* arr, size_t size) {
    if (size == 1) {
        return arr[0];
    }

    T temp = getMaxRecur(arr, size - 1);
    
    if (temp > arr[size]) {
        return temp;
    } else {
        return arr[size - 1];
    }   
}

int main() {

    int arr[] = { 0, 10, 20, 7, 5};
    double arr1[] = {1.0, 25.2, 3798923974923.2, 7.0};
    string arr2[] = {"d", "u", "n", "n", "o", "t", "e", "s", "t"};

    cout << "Największy element z arr to: " << getMaxRecur(arr, 5) << endl;
    cout << "Największy element z arr1 to: " << getMaxRecur(arr1, 4) << endl;
    cout << "Największy element z arr2 to: " << getMaxRecur(arr2, 9) << endl;
    

    return 0;
}
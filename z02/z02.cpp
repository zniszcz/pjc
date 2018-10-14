#include <iostream>
#include <cmath>

const double* aver(const double* arr, size_t size, double& average) {
    for (int i = 0; i < size; i++) {
        average += arr[i];
    }

    average /= size;
    
    return &arr[0];
}
    
int main () {
    using std::cout; using std::endl;

    double arr[] = {1,7,5,4,3,2};
    size_t size = sizeof(arr)/sizeof(arr[0]);
    double average = 0;
    const double* p = aver(arr, size, average);
    cout << *p << " " << average << endl;
}
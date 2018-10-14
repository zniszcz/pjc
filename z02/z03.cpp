#include <iostream>
#include <cmath>

const double* aver(const double* arr, size_t size, double& average) {
    for (int i = 0; i < size; i++) {
        average += arr[i];
    }

    average /= size;

    double diff[size];

    double theLeastDifference = std::abs(average - arr[0]);
    int theLeastDifferenceIndex = 0;

    for (int j = 0; j < size; j++) {
        double localDiff = std::abs(average - arr[j]);
        if (localDiff < theLeastDifference) {
            theLeastDifference = localDiff;
            theLeastDifferenceIndex = j;
        }
    }
    
    return &arr[theLeastDifferenceIndex];
}
    
int main () {
    using std::cout; using std::endl;

    double arr[] = {1,7,5,4,3,2};
    size_t size = sizeof(arr)/sizeof(arr[0]);
    double average = 0;
    const double* p = aver(arr, size, average);
    cout << *p << " " << average << endl;
}
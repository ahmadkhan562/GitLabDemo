#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {50, 10, 40, 30, 20}; // Unsorted array
    int n = 5;

    int max = numbers[0]; // Initialize max
    int min = numbers[0]; // Initialize min

    // Bubble Sort and find max & min
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(numbers[j] > numbers[j+1]) {
                // Swap elements
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }

    // After sorting, max is last element, min is first element
    min = numbers[0];
    max = numbers[n-1];

    // Display sorted array
    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;

    return 0;
}

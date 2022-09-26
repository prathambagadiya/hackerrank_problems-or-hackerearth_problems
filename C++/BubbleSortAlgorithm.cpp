#include <iostream>
using namespace std;

void bubbleSort(int array[], int size) {
    for (int step = 0; step < size; step++) {
        for (int i = 0; i < size - step; i++) {
            if (array[i] > array[i + 1]) {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "  " << array[i];
    }
    cout << "\n";
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int data[n];
    cout << "\nEnter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }
    bubbleSort(data, n);
    cout << "Sorted Array in Ascending Order: ";  
    printArray(data, n);
}

#include <iostream>
#include <vector>
using namespace std;

int partitionArray(int arr[], int start, int end) {
    int pivot = arr[end];
    int pos = start;

    for (int i = start; i < end; i++) {
        if (arr[i] <= pivot) {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }

    swap(arr[pos], arr[end]);
    return pos;
}

void quickSort(int arr[], int start, int end) {
    // Base condition
    if (start >= end) {
        return;
    }

    int pivotIndex = partitionArray(arr, start, end);

    // Sort left part
    quickSort(arr, start, pivotIndex - 1);

    // Sort right part
    quickSort(arr, pivotIndex + 1, end);
}

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quickSort(arr.data(), 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
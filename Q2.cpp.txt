#include <iostream>
#include <climits>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void findSecondLargestAndSmallest(int arr[], int size) {
    if (size < 2) {
        cout << "Array is too small to find second largest or second smallest." << endl;
        return;
    }

    int largest = INT_MIN, secondLargest = INT_MIN;
    int smallest = INT_MAX, secondSmallest = INT_MAX;

    for (int i = 0; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }

        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    cout << "Second Largest Element: " << secondLargest << endl;
    cout << "Second Smallest Element: " << secondSmallest << endl;
}

int main() {
    int size;
    
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter " << size << " elements for the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    reverseArray(arr, size);
    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    findSecondLargestAndSmallest(arr, size);

    delete[] arr;

    return 0;
}

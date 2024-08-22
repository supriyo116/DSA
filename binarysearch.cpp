#include <iostream>
using namespace std;

// Binary search function
int bs(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;  // Array indices range from 0 to n-1
    while (s <= e) {
        int mid = (s + e) / 2;
        if (arr[mid] == key) {  // Check if mid element is the key
            return mid;  // Return the index of the found element
        } else if (arr[mid] > key) {
            e = mid - 1;  // Move the end pointer
        } else {
            s = mid + 1;  // Move the start pointer
        }
    }
    return -1;  // Return -1 if the key is not found
}

int main() {   
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Declare array with size n
    int arr[n];  

    cout << "Enter the elements of the array (sorted):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Store elements in the array
    }

    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    // Perform binary search and output result
    int result = bs(arr, n, key);
    if (result != -1) {
        cout << "Key found at index: " << result << endl;
    } else {
        cout << "Key not found" << endl;
    }

    return 0;
}

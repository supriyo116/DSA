#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int firstRepeatingIndex = -1; // Initialize to -1 indicating no repeating element found yet

    // Loop through each element to find the first repeating element
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // Start j from i+1 to avoid self-comparison
            if (arr[i] == arr[j]) {
                firstRepeatingIndex = i; // Store the index of the first repeating element
                break; // Exit the inner loop once the first repeating element is found
            }
        }
        if (firstRepeatingIndex != -1) { // If a repeating element is found, exit the outer loop
            break;
        }
    }

    if (firstRepeatingIndex != -1) {
        cout << "The first repeating element is " << arr[firstRepeatingIndex] << " at index " << firstRepeatingIndex << endl;
    } else {
        cout << "No repeating elements found." << endl;
    }

    return 0;
}

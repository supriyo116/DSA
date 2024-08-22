#include <bits/stdc++.h>

using namespace std;

void printSubarraySums(const vector<int>& arr) {
    int n = arr.size();
    // Iterate over all possible starting points of subarrays
    for (int i = 0; i < n; ++i) {
        int current_sum = 0;
        // Iterate over all possible ending points of subarrays starting from i
        for (int j = i; j < n; ++j) {
            current_sum += arr[j];  // Add current element to current_sum
            cout << "Sum of subarray from index " << i << " to " << j << ": " << current_sum << endl;
        }
    }
}

int main() {
    // Example usage
    vector<int> arr = {1, 2, 3, 4};
    printSubarraySums(arr);
    return 0;
}

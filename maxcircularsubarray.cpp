#include <iostream>
#include <algorithm>
using namespace std;

// Function to find the maximum subarray sum using Kadane's algorithm
int maxSubarraySum(int arr[], int n) {
    int maxEndingHere = arr[0];
    int maxSoFar = arr[0];

    for (int i = 1; i < n; i++) {
        maxEndingHere = max(arr[i], maxEndingHere + arr[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }

    return maxSoFar;
}

// Function to find the minimum subarray sum
int minSubarraySum(int arr[], int n) {
    int minEndingHere = arr[0];
    int minSoFar = arr[0];

    for (int i = 1; i < n; i++) {
        minEndingHere = min(arr[i], minEndingHere + arr[i]);
        minSoFar = min(minSoFar, minEndingHere);
    }

    return minSoFar;
}

// Function to find the maximum circular subarray sum
int maxCircularSubarraySum(int arr[], int n) {
    // Step 1: Find the maximum subarray sum (non-circular)
    int maxNormal = maxSubarraySum(arr, n);

    // If all elements are negative, return the maximum subarray sum
    if (maxNormal < 0) {
        return maxNormal;
    }

    // Step 2: Find the minimum subarray sum
    int minSubarray = minSubarraySum(arr, n);

    // Step 3: Calculate the total sum of the array
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    // Step 4: Calculate the maximum circular subarray sum
    int maxCircular = totalSum - minSubarray;

    // Step 5: Return the maximum of the non-circular and circular cases
    return max(maxNormal, maxCircular);
}

int main() {
    int arr[] = {5, -3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxCircularSubarraySum(arr, n);
    cout << "The maximum circular subarray sum is: " << result << endl;

    return 0;
}

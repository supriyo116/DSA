#include <bits/stdc++.h>
using namespace std;

int main()
{
    char arr[101];
    cin >> arr;

    // Create a copy of the original array
    char arr1[101];
    strcpy(arr1, arr);

    // Reverse the original array
    reverse(arr, arr + strlen(arr));

    // Compare the original and reversed arrays
    if (strcmp(arr, arr1) == 0) {
        cout << "Palindrome";
    } else {
        cout << "Not";
    }

    return 0;
}

#include <iostream>
#include <algorithm> // For max and min
#include <climits>   // For INT_MIN and INT_MAX

using namespace std;

int main()
{
    int arr[4] = {1, 2, 3, 4};
    int maxn = INT_MIN;
    int minn = INT_MAX;

    for (int i = 0; i < 4; i++) {
        maxn = max(maxn, arr[i]); // Use max
        minn = min(minn, arr[i]); // Use min
    }

    cout << minn << ' ' << maxn << endl;

    return 0;
}

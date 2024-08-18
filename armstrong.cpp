#include <iostream>
#include <cmath> // for pow function

using namespace std;

int main()
{
    int n;
    cin >> n;
    int j = 0;
    int k = n;
    while (n > 0)
    {
        j = j + pow(n % 10, 3);
        n = n / 10;
    }
    if (j == k)
    {
        cout << "armstrong";
    }
    else
    {
        cout << "not";
    }
    return 0;
}

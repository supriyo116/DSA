#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k = 0;
    for (int i = 2; i < n;i++)
    {
        if (n % i == 0)
        {
            k = 1;
        }
    }

    if (k == 1)
    {
        cout << "Not Prime";
    }
    else
    {
        cout << "prime";
    }
    return 0;
}

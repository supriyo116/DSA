#include <iostream>
using namespace std;

int fact(int a)
{
    if (a > 1)
    {
        return a * fact(a - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}

#include <iostream>
#include <algorithm> // For max and min
#include <climits>   // For INT_MIN and INT_MAX

using namespace std;

int main()
{
    int a=20;
    int *apr;
    apr=&a;
    cout<<&a<<endl;
    cout<<apr<<endl;

    //dereferencing
    cout<<*apr<<endl;

    //array pointer

    int arr[]={1,2,3,4,5};
    cout<<arr;  //works as pointer to first array

    //pointers arithmatic

    //pointer to pointer
    

    return 0;
}

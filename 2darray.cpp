#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[3][3];

    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    int search=5;

    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if (arr[i][j]==search){
                cout<<"found at "<<i+1<<','<<j+1<<endl;
            }
        }
    }

    return 0;
}

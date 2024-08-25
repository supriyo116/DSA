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
                cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }
    int transpose[3][3];

    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            transpose[j][i]=arr[i][j];
        }
    }

    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
                cout<<transpose[i][j]<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}

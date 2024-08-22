#include <bits/stdc++.h>

using namespace std;

int main(){
    int arr[]={1,4,5,6,2,3,9,11};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<=n;i++){
        int max=INT_MIN;
        for(int j=0;j<i;j++){
            if(arr[j]>max){
                max=arr[j];
            }
        }
        cout<<"max till: "<<i<<" is "<<max<<endl;
    }

    return 0;
}
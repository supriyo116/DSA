
//find continuous sub array that adds upto integer s

#include <iostream>
using namespace std;

int main() {
    int a[]={1,2,3,7,5};
    int n=5;
    int s=12;
    for (int i=0;i<n;i++){
        int sum=0;
        for (int j=i;j<n;j++){
            sum=sum+a[j];
            if (sum==s){
                cout<<"from "<<i<<" to "<<j<<" sum "<<sum<<endl;
            }
        }
    }
    return 0;
}

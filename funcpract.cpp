#include <iostream>
#include <cmath>
using namespace std;

int sumnat(int n){
    int k=0;
    for(int i=1;i<=n;i++){
        k=k+i;
    }
    return k;
}

bool checkpythotriplet(int i,int j,int k){
    if((pow(i,2)+pow(j,2)==pow(k,2))||(pow(k,2)+pow(j,2)==pow(i,2))||(pow(i,2)+pow(k,2)==pow(j,2))){
        return true;
    }
    else{
        return false;
    }
}

//conversions bin to dec,oct to dec,hex to dec,dec to bin,dec to octal,dec to hex

//add two binary num


int main()
{   
    
    return 0;
}

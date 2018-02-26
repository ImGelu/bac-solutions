#include <iostream>

using namespace std;

int nz(int n){
    int k=0, div=5;
    while(div<=n){
        k+=(n/div);
        div*=5;
    }

    return k;
}

int main(){

    int k, i=1;

    cin>>k;

    while(nz(i)!=k) i++;

    cout<<i;    

    return 0;
}
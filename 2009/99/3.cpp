#include <iostream>

using namespace std;

void Nr(int &k){
    int nrNou=0, p=1;
    while(k>9){
        nrNou=nrNou+(k%10)*p;
        p*=10;
        k/=10;
    }
    k=nrNou;
}

int main(){

    int k;

    cin>>k;

    Nr(k);

    cout<<k;

    return 0;
}
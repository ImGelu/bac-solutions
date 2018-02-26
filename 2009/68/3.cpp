#include <iostream>

using namespace std;

int calcul(int n, int k){
    int aux=n, nrCifre=0, p=1;

    while(aux){
        aux/=10;
        nrCifre++;
    }

    if(k>nrCifre) return -1;

    for(int i=1; i<k; i++) p*=10;

    return n/p%10;
}

int main(){

    int n, k;

    cin>>n>>k;

    cout<<calcul(n, k);

    return 0;
}
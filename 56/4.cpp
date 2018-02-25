#include <iostream>

using namespace std;

int numere(int x, int &nrp){
    nrp=0;
    bool ok=1;

    for(int i=2; i<=x; i++){
        ok=1;
        for(int j=2; j<=i/2; j++)
            if(j%i==0){
                ok=0;
                break;
            }

        if(ok) nrp++;
    }
}

int main(){

    int a, b, total, panaLaA;

    cin>>a>>b;

    if(a>b) swap(a, b);

    numere(b, total);
    numere(a, panaLaA);

    if(total-panaLaA) cout<<"DA";
    else cout<<"NU";

    return 0;
}
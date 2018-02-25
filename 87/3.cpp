#include <iostream>

using namespace std;

int numar(int a, int b){
    int nrCif=0, auxA=a, nrNou=0, p=1;

    while(auxA){
        nrCif++;
        auxA/=10;
    }

    for(int i=1; i<=nrCif-b; i++) p=p*10;
    for(int i=1; i<=b; i++) nrNou=nrNou*10+1;

    return nrNou*p+a%p;
}

int main(){

    int a, b;

    cin>>a>>b;

    cout<<numar(a, b);

    return 0;
}
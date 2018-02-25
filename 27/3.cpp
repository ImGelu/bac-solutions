#include <iostream>

using namespace std;

double nreal(int x, int y){
    int aux=y, nrCifreY=0, p=1;

    while(aux){
        nrCifreY++;
        aux/=10;
    }

    for(int i=1; i<=nrCifreY; i++) p*=10;

    x=x*p+y;

    return (double)x/p;
}

int main(){

    int x, y;

    cin>>x>>y;

    cout<<nreal(x, y);

    return 0;
}
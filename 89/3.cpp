#include <iostream>

using namespace std;

void numar(int &n, int c1, int c2){
    int nrNou=0, p=1;

    while(n){
        if(n%10==c1) nrNou=nrNou+c2*p;
        else nrNou=nrNou+(n%10)*p;
        p*=10;
        n/=10;
    }

    n=nrNou;
}

int main(){

    int n, c1, c2;

    cin>>n>>c1>>c2;

    numar(n, c1, c2);

    cout<<n;

    return 0;
}
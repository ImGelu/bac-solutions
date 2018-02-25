#include <iostream>

using namespace std;

int main(){

    int x, k=0, prec, anteprec;

    cin>>x;
    anteprec=x;

    cin>>x;
    prec=x;

    while(cin>>x){
        if(prec<anteprec && prec<x) k++;
        anteprec=prec;
        prec=x;
    }

    cout<<k;

    return 0;
}
#include <iostream>

using namespace std;

int main(){

    int minPrec, minActual, x;

    cin>>x;
    minPrec=minActual=x;

    while(cin>>x){
        if(x<minPrec) minPrec=x;
        if(x<minActual){
            minPrec=minActual;
            minActual=x;
        }
    }

    if(minPrec>minActual) swap(minPrec, minActual);

    cout<<minPrec<<" "<<minActual;

    return 0;
}
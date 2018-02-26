#include <iostream>

using namespace std;

int main(){

    int x, k=1, kMax=-1, prec;

    cin>>x;
    prec=x;

    while(cin>>x){
        if(x<prec) k++;
        else k=1;

        if(k>kMax) kMax=k;

        prec=x;
    }

    cout<<kMax;

    return 0;
}
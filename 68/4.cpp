#include <iostream>

using namespace std;

int main(){

    int n, x, prec, k=1, kMax=-1, nrMax=0;

    cin>>n;

    cin>>x;
    prec=x;

    for(int i=1; i<n; i++){
        cin>>x;
        if(x==prec) k++;
        else k=1;

        if(k>=kMax){
            kMax=k;
            nrMax=x;
        }
        prec=x;
    }

    cout<<kMax<<" "<<nrMax;

    return 0;
}
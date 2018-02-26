#include <iostream>

using namespace std;

int main(){

    int nrDiv, aux, p, div, nrDivMax=-1, nrMax, x;

    while(cin>>x){
        aux=x, nrDiv=0, div=2, p=1;
            while(aux>1){
                while(aux%div==0){
                    aux/=div;
                    nrDiv++;
                }
                if(nrDiv) p=p*(nrDiv+1);
                div++;
                nrDiv=0;
            }
            if(p==nrDivMax) nrMax=min(nrMax, x);
            if(p>nrDivMax){
                nrDivMax=p;
                nrMax=x;
            }
    }

    cout<<nrMax;

    return 0;
}
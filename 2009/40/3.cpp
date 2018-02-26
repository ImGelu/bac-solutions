#include <iostream>

using namespace std;

int main(){

    int n, x, precPar=-1, precImpar=-1;
    bool ok=1;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        if(x%2==0 && precPar==-1) precPar=x;
        else if(x%2!=0 && precImpar==-1) precImpar=x;
        else if(x%2==0 && precPar%2==0){
            if(x<precPar) ok=0;

        precPar=x;
        }
        else if(x%2==0 && precImpar%2==0){
            if(x>precImpar) ok=0;

        precImpar=x;
        }
    }

    if(ok) cout<<"DA";
    else cout<<"NU";

    return 0;
}
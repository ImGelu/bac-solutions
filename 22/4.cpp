#include <iostream>

using namespace std;

int main(){

    int n, aux, a, b;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>a>>b;
        for(int j=b; j>=a; j--){
            aux=j;
            
            while(aux%2==0) aux/=2;

            if(aux==1){
                cout<<j<<" ";
                break;
            }
        }
        if(aux!=1) cout<<0<<" ";
    }

    return 0;
}
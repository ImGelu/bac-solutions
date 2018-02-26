#include <iostream>

using namespace std;

int main(){

    int n, x, k, aux;

    cin>>n>>k;

    for(int i=1; i<=n; i++){
        cin>>x;
        aux=x;
        
        while(aux%k==0) aux/=k;

        if(aux==1) cout<<x<<" ";
    }
    
    return 0;
}
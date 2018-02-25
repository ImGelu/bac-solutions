#include <iostream>

using namespace std;

bool prim(int n){
    if(n<2) return false;
    for(int i=2; i<=n/2; i++)
        if(n%i==0) return false;

    return true;
}

int main(){

    int n, x, prime[32001], k=0;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        if(prim(x)) prime[++k]=x;
    }

    for(int i=1; i<k; i++)
        for(int j=i+1; j<=k; j++)
            if(prime[i]>prime[j]) swap(prime[i], prime[j]);

    for(int i=1; i<=k; i++) cout<<prime[i]<<" ";
    return 0;
}
#include <iostream>

using namespace std;

int main(){

    int n, k, v[100];

    cin>>n>>k;

    for(int i=1; i<=n; i++) cin>>v[i];

    while(k--){
        v[n+1]=v[1];
        for(int i=1; i<=n; i++) v[i]=v[i+1];
    }

    for(int i=1; i<=n; i++) cout<<v[i]<<" ";

    return 0;
}
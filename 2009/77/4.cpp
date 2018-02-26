#include <iostream>

using namespace std;

void prim(int n, bool &p){
    p=1;
    if(n==1) p=0;

    for(int i=2; i<=n/2; i++)
        if(n%i==0) p=0;
}

int main(){

    int n, a[100];
    bool p;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=n; i>=1; i--){
        prim(a[i], p);
        if(p) cout<<a[i]<<" ";
    }

    return 0;
}
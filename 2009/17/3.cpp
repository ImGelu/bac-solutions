#include <iostream>

using namespace std;

int interval(int v[100], int n){
    int k=0, a, b;
    a=v[1];
    b=v[n];
    if(a>b) swap(a, b);
    for(int i=1; i<=n; i++)
        if(v[i]>=a && v[i]<=b) k++;

    return k;
}

int main(){

    int v[100], n;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>v[i];

    if(interval(v, n)==n) cout<<"DA";
    else cout<<"NU";

    return 0;
}
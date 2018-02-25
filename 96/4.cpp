#include <iostream>

using namespace std;

int main(){

    int n, m, x, a, b, maxim, minim, k=0;

    cin>>n>>m;

    cin>>x;
    maxim=minim=x;

    for(int i=1; i<n; i++){
        cin>>x;
        if(x<minim) minim=x;
        if(x>maxim) maxim=x;
    }

    for(int i=1; i<=m; i++){
        cin>>a>>b;
        if(a>b) swap(a, b);
        if(a<=minim && b>=maxim) k++;
    }

    cout<<k;

    return 0;
}
#include <iostream>

using namespace std;

int main(){

    int n, a, b, x, minim;

    cin>>n>>a>>b;

    minim=b+1;

    for(int i=1; i<=n; i++){
        cin>>x;
        if(x>=a && x<=b) minim=min(minim, x);
    }

    if(minim==b+1) cout<<"NU EXISTA";
    cout<<minim;

    return 0;
}
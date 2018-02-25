#include <iostream>

using namespace std;

int main(){

    int n, v[1000], a, mij, ls=1, ld;
    bool gasit=0;

    cin>>n;
    ld=n;

    for(int i=1; i<=n; i++) cin>>v[i];

    cin>>a;

    while(!gasit && ls<=ld){
        mij=(ls+ld)/2;
        if(v[mij]==a){
            gasit=1;
            break;
        }
        else if(a>v[mij]) ls=mij+1;
        else ld=mij-1;
    }

    if(gasit) cout<<"DA";
    else cout<<"NU";

    return 0;
}
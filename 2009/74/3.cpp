#include <iostream>

using namespace std;

void Cifra(int n, int &x){
    x=-1;

    while(n){
        if(n%10>x) x=n%10;
        n/=10;
    }
}

int main(){

    int n, c, x, k=0, cMax;

    cin>>n>>c;

    for(int i=1; i<=n; i++){
        cin>>x;
        Cifra(x, cMax);
        if(cMax==c) k++;
    }

    if(k) cout<<"DA\n"<<k;
    else cout<<"NU";

    return 0;
}
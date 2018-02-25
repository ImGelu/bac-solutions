#include <iostream>

using namespace std;

int calcul(int n, int v[10000]){
    int r, a, b;
    a=v[1];
    b=v[2];
    while(b){
        r=a%b;
        a=b;
        b=r;
    }

    for(int i=3; i<=n; i++){
        b=v[i];
        while(b){
            r=a%b;
            a=b;
            b=r;
        }
    }

    return a;
}

int main(){

    int n, a[10000];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    cout<<calcul(n, a);

    return 0;
}
#include <iostream>

using namespace std;

void f(int n, int a[10]){
    int minimPar=10000, maximImpar=-1, minimParI, maximImparI;

    for(int i=1; i<=n; i++){
        if(a[i]%2==0 && a[i]<minimPar){
            minimPar=a[i];
            minimParI=i;
        }

        if(a[i]%2!=0 && a[i]>maximImpar){
            maximImpar=a[i];
            maximImparI=i;
        }
    }

    swap(a[maximImparI], a[minimParI]);
}

int main(){

    int n, a[10];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    f(n, a);

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";

    return 0;
}
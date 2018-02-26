#include <iostream>

using namespace std;

void shift(int n, int x[100]){
    x[n+1]=x[1];

    for(int i=1; i<=n; i++) x[i]=x[i+1];
}

int main(){

    int n, x[100];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>x[i];

    for(int i=1; i<=n; i++) shift(n-i+1, x);

    for(int i=1; i<=n+1; i++) cout<<x[i]<<" ";

    return 0;
}
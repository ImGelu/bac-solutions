#include <iostream>

using namespace std;

bool par(int n){
    while(n){
        if(n%2==0) return 1;
        n/=10;
    }
    return 0;
}

int main(){

    int n, x, k=0;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        if(x%2==0 && !par(x/10)) k++;
    }

    cout<<k;

    return 0;
}
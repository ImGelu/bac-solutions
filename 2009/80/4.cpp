#include <iostream>

using namespace std;

bool ordonat(int n){
    while(n>9){
        if(n%10>=n/10%10) return false;
        n/=10;
    }
    return true;
}

int main(){

    int n, k=0, x, a[1000];
    bool exista;

    cin>>n;

    for(int i=1; i<=n; i++){
        exista=0;
        cin>>x;
        for(int j=1; j<=k; j++)
            if(x==a[j]) exista=1;

        if(!exista && ordonat(x)) a[++k]=x;
    }

    for(int i=1; i<=k; i++) cout<<a[i]<<" ";

    return 0;
}
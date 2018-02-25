#include <iostream>

using namespace std;

int calcul(int n, int a[10000]){
    int k=0;
    bool prim=1;

    for(int i=1; i<=n; i++){
        prim=1;
        for(int j=2; j<=a[i]/2; j++)
            if(a[i]%j==0) prim=0;

        if(prim) k++;
    }

    return k;
}

int main(){

    int n, a[10000];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    cout<<calcul(n, a);

    return 0;
}
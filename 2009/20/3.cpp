#include <iostream>

using namespace std;

void nule(int a[100], int n){
    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[i]==0 && a[j]!=0) swap(a[i], a[j]);
}

int main(){

    bool ok=1;
    int a[100], n;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    nule(a, n);

    for(int i=1; i<=5; i++)
        if(a[i]==0) ok=0;

    if(ok) for(int i=1; i<=5; i++) cout<<a[i]<<' ';
    else cout<<"NU EXISTA";

    return 0;
}
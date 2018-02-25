#include <iostream>

using namespace std;

void aranjare(double a[100], int n){
    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[i]>0 && a[j]<0) swap(a[i], a[j]);
}

int main(){

    int n;
    double a[100];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    aranjare(a, n);

    for(int i=n; i>=1; i--) cout<<a[i]<<" ";

    return 0;
}
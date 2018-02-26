#include <iostream>

using namespace std;

void ordonare(double x[100], int n){
    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(x[i]>x[j]) swap(x[i], x[j]);
}

int main(){

    int n, m;
    double x[100];

    cin>>n>>m;

    for(int i=1; i<=n; i++) cin>>x[i];

    ordonare(x, n);

    for(int i=n-m+1; i<=n; i++) cout<<x[i]<<" ";

    cout<<endl;

    for(int i=m; i>=1; i--) cout<<x[i]<<" ";

    return 0;
}
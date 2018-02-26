#include <iostream>

using namespace std;

void ordonare(int x[100], int n){
    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(x[i]%2!=0 && x[j]%2!=0 && x[i]>x[j]) swap(x[i], x[j]);
}

int main(){

    int n, x[100];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>x[i];

    ordonare(x, n);

    for(int i=1; i<=n; i++) cout<<x[i]<<" ";

    return 0;
}
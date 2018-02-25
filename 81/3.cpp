#include <iostream>

using namespace std;

bool ordonat(int n, int v[100], int k1, int k2){
    for(int i=k1; i<k2; i++)
        if(v[i]>v[i+1]) return false;

    return true;
}

int main(){

    int n, a[100], difMax;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[100];

    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(ordonat(n, a, i, j)) cout<<i<<" "<<j+1<<endl;

    return 0;
}
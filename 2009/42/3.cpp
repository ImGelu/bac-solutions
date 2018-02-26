#include <iostream>

using namespace std;

int P(int a[100], int n, int k){
    int s=0;

    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[i]<a[j]) swap(a[i], a[j]);

    for(int i=1; i<=k; i++) s+=a[i];

    return s;
}

int main(){

    int n, a[100], k;

    cin>>n>>k;

    for(int i=1; i<=n; i++) cin>>a[i];

    cout<<P(a, n, k);

    return 0;
}
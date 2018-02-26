#include <iostream>

using namespace std;

int main(){

    int n, a[1000];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[i]>0 && a[j]>0 && a[i]>a[j]) swap(a[i], a[j]);

    for(int i=1; i<=n; i++)
        if(a[i]<0) cout<<0<<" ";
        else cout<<a[i]<<" ";

    return 0;
}
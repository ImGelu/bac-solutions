#include <iostream>

using namespace std;

int main(){

    int n, v[100], k=0;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>v[i];

    for(int i=2; i<n; i++)
        if(v[i]==v[i-1]+v[i+1]) k++;

    cout<<k;

    return 0;
}
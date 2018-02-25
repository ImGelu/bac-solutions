#include <iostream>

using namespace std;

int main(){

    int n;
    double a[100];

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<=n; i++)
        if(a[i]!=a[i+1]) cout<<a[i]<<" ";

    return 0;
}
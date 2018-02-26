#include <iostream>

using namespace std;

int main(){

    int n, a[300];

    cin>>n;

    for(int i=1; i<=3*n; i++) cin>>a[i];

    for(int i=1; i<=n; i++) swap(a[i], a[2*n+i]);

    for(int i=1; i<=3*n; i++) cout<<a[i]<<" ";

    return 0;
}
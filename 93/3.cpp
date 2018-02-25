#include <iostream>

using namespace std;

int main(){

    int n, a[100], lim;

    cin>>n;

    lim=((n+1)/2)+1;

    for(int i=1; i<=n; i+=2) a[i]=(i+1)/2;
    for(int i=n-1; i>=2; i-=2){
        a[i]=lim;
        lim++;
    }

    for(int i=1; i<=n; i++) cout<<a[i]<<" ";

    return 0;
}
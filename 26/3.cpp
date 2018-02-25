#include <iostream>

using namespace std;

int main(){

    int n, k;

    cin>>n>>k;

    for(int i=k; i>=1; i--) cout<<n*i<<" ";

    return 0;
}
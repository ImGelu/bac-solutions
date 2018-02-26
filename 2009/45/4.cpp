#include <iostream>

using namespace std;

int fr[100];

int main(){

    int n, x;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        fr[x]++;
    }

    for(int i=0; i<=99; i++)
        if(fr[i]) cout<<i<<" ";

    return 0;
}
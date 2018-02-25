#include <iostream>

using namespace std;

int fr[10000];

int main(){

    int n, x;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        fr[x]++;
    }

    for(int i=0; i<=9999; i++)
        if(fr[i]>=2) cout<<i<<" ";

    return 0;
}
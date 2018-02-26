#include <iostream>

using namespace std;

int fr[10];

int main(){

    int n, x, maxim=-1;

    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>x;
        fr[x]++;
        if(x>maxim) maxim=x;
    }

    cout<<maxim<<" "<<fr[maxim];

    return 0;
}
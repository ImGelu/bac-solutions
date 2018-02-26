#include <iostream>

using namespace std;

int main(){

    int n, a[100], s=0;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<=n; i++){
        s=0;
        for(int j=1; j<=n-i+1; j++) s+=a[j];
        cout<<s<<"\n";
    }
    return 0;
}
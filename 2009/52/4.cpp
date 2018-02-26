#include <iostream>

using namespace std;

int main(){

    int n, a[100];
    bool posibil=1;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>a[i];

    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            if(a[i]==a[j]){
                posibil=0;
                break;
            }
    if(posibil) cout<<"Da";
    else cout<<"Nu";

    return 0;
}
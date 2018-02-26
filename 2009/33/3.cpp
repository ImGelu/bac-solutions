#include <iostream>

using namespace std;

void impar(int x[100], int n){
    bool ok=0;

    for(int i=1; i<=n; i++)
        if(x[i]%2!=0) ok=1;

    if(ok) cout<<"DA";
    else cout<<"NU";

}

int main(){

    int x[100], n;

    cin>>n;

    for(int i=1; i<=n; i++) cin>>x[i];

    impar(x, n);

    return 0;
}
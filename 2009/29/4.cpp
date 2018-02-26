#include <iostream>

using namespace std;

int suma(int a[100], int i, int j){
    int s=0;
    for(int z=i; z<=j; z++) s+=a[z];

    return s;
}

int main(){

    int n, a[100], b[100], m, s=0;
    bool ok=1;

    cin>>n>>m;

    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=m; i++) cin>>b[i];

    for(int i=1; i<=n; i++){
        s+=a[i];
        if(i%3==0){
            if(s!=b[i/3]){
                ok=0;
                break;
            }
            s=0;
        }
    }

    if(ok) cout<<"DA";
    else cout<<"NU";

    return 0;
}
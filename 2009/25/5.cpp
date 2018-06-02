#include <iostream>

using namespace std;

int main(){

    int n, m, a[100][100], p=1, maxim=-1;

    cin>>n>>m;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];

    for(int j=1; j<=m; j++){
        p=1;
        for(int i=1; i<=n; i++)
            p*=a[i][j];

        if(p>maxim) maxim=p;
    }

    for(int j=1; j<=m; j++){
        p=1;
        for(int i=1; i<=n; i++)
            p*=a[i][j];

        if(p==maxim) cout<<j<<" ";
    }

    return 0;
}
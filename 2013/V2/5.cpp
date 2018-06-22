#include <iostream>

using namespace std;

int main()
{
    int n, m, a[100][100];
    bool ok=1, exista=0;

    cin>>n>>m;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];

    for(int j=1; j<=m; j++){
        ok=1;
        for(int i=2; i<=n; i++)
            if(a[i][j]!=a[i-1][j]) ok=0;

        if(ok){
            exista=1;
            cout<<a[1][j]<<" ";
        }
    }

    if(!exista) cout<<"Nu exista";

    return 0;
}

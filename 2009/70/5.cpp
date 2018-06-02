#include <iostream>

using namespace std;

int main(){

    int n, m, x, a[100][100];

    cin>>n>>m>>x;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];

    for(int i=x; i<=n; i++)
        for(int j=1; j<=m; j++)
            a[i][j]=a[i+1][j];

    n--;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++)
            cout<<a[i][j]<<" ";

        cout<<endl;
    }

    return 0;
}
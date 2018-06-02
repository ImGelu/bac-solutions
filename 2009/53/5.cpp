#include <iostream>

using namespace std;

int main(){

    int m, n, x, y, a[100][100];

    cin>>m>>n>>x>>y;

    for(int i=1; i<=m; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];

    for(int j=1; j<=n; j++) swap(a[x][j], a[y][j]);

    cout<<endl;

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++)
            cout<<a[i][j]<<" ";

        cout<<endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

int main()
{
    int n, m, a[100][100];

    cin>>n>>m;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(i==n || i==1 || j==m || j==1) a[i][j]=a[n][m];
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

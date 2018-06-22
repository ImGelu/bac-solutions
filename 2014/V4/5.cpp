#include <iostream>

using namespace std;

void eliminareColoana(int n, int &m, int k, int a[100][100]){
    for(int i=1; i<=n; i++)
        for(int j=k; j<m; j++)
            a[i][j]=a[i][j+1];
    m--;
}

void eliminareLinie(int &n, int m, int k, int a[100][100]){
    for(int i=k; i<n; i++)
        for(int j=1; j<=m; j++)
            a[i][j]=a[i+1][j];
    n--;
}

int main()
{
    int n, m, a[100][100];

    cin>>n>>m;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];

    eliminareLinie(n, m, n-1, a);
    eliminareColoana(n, m, m-1, a);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++)
            cout<<a[i][j]<<" ";

    cout<<endl;
    }

    return 0;
}

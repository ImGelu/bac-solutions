#include <iostream>

using namespace std;

int main()
{
    int n, m, a[100][100], minimPrima, minimUltima, minimPrimaIndex, minimUltimaIndex;

    cin>>n>>m;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];

    minimPrima=a[1][1];
    minimUltima=a[1][m];

    for(int i=1; i<=n; i++){
        if(a[i][1]<minimPrima){
            minimPrima=a[i][1];
            minimPrimaIndex=i;
        }
        if(a[i][m]<minimUltima){
            minimUltima=a[i][m];
            minimUltimaIndex=i;
        }
    }

    swap(a[minimPrimaIndex][1], a[minimUltimaIndex][m]);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}

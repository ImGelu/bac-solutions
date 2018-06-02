#include <iostream>

using namespace std;

int main(){

    int n, m, k=1, a[100][100];

    cin>>n>>m;

    for(int j=1; j<=m; j++)
        for(int i=1; i<=n; i++)
            a[i][j]=k++;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++)
            cout<<a[i][j]<<" ";

        cout<<endl;
    }

    return 0;
}
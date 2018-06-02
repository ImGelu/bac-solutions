#include <iostream>

using namespace std;

int main(){

    int n, m, a[10][10];

    cin>>n>>m;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            a[i][j]=min(i, j);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
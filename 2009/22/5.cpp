#include <iostream>

using namespace std;

int main(){

    int n, m, a[100][100], k;

    cin>>n>>m;

    k=n*m;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            a[i][j]=k--;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++)
            cout<<a[i][j]<<" ";

        cout<<endl;
    }


    return 0;
}
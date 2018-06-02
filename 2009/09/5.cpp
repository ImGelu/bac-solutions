#include <iostream>

using namespace std;

int main(){

    int n, a[100][100];

    cin>>n;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>a[i][j];

    for(int j=1; j<=n; j++) cout<<a[1][j]<<" ";
    for(int i=2; i<=n; i++) cout<<a[i][n]<<" ";
    for(int j=n-1; j>=1; j--) cout<<a[n][j]<<" ";
    for(int i=n-1; i>=2; i--) cout<<a[i][1]<<" ";

    return 0;
}
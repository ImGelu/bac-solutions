#include <iostream>

using namespace std;

int main(){

    int n, m, a[100][100];

    cin>>n>>m;


    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            if(i==1) a[i][j]=j;
            else if(j==1) a[i][j]=i;
            else a[i][j]=a[i-1][j]+a[i][j-1];


    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++)
            cout<<a[i][j]<<" ";

    cout<<endl;
    }

    return 0;
}
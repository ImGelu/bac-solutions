#include <iostream>

using namespace std;

int main(){

    int n, m, a[100][100], s=0, maxim=-1, jMaxim;

    cin>>n>>m;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin>>a[i][j];

    for(int j=1; j<=m; j++){
        s=0;
        for(int i=1; i<=n; i++)
            s+=a[i][j];

        if(s>maxim){
            maxim=s;
            jMaxim=j;
        }
    }

    cout<<jMaxim;

    return 0;
}
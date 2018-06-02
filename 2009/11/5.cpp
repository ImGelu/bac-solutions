#include <iostream>

using namespace std;

int main(){

    int n, m, a[100][100], minim=10000;

    cin>>n>>m;

    for(int i=1; i<=n; i++){
        minim=10000;
        for(int j=1; j<=m; j++){
            cin>>a[i][j];
            if(a[i][j]<minim) minim=a[i][j];
        }
        cout<<minim<<" ";
    }

    return 0;
}